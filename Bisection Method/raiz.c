/* Archivo raiz.c */
#include "raiz.h"
#include <math.h>

double radius = 0.0;
double volume = 0.0;
double root = 0.0;

double bissecao(double a, double b, int p, double (*f) (double x)) {
	int i;
	double midpoint = (a + b)/2;
	double n = fabs(log2(b - a) - p*log2(10));
	
	for (i = 0; i <= n; i++) {
		midpoint = (a + b)/2;
		
		if (f(midpoint) == 0) {
			return midpoint;
		}
		
		if (f(a)*f(midpoint) < 0) {
			b = midpoint;
		}
		else {
			a = midpoint;
		}
	}
	
	return midpoint;
}

double altura_esfera(double h) {
	return -1.0/3.0*M_PI*pow(h, 3) + M_PI*radius*pow(h, 2) - volume;
}

double altura_agua(double r, double v) {
	radius = r;
	volume = v;
	
	return bissecao(0, 2.0*radius, 10, altura_esfera);
}

double pontofixo(double x0, double epsilon, double (*g) (double x)) {
	double x = g(x0);
	
	while (fabs(x - x0) > epsilon) {
		x0 = x;
		x = g(x0);
	}
	
	return x;
}

double raiz(double x) {
	return x - (x - root/x)/2;
}

double fraiz(double z) {
	root = z;
	
	return pontofixo(z/2, 0.5*pow(10, -6), raiz);
}
