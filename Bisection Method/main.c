/******************************************************************************

Jaime Andrés Castañeda Barbosa

Bisection Method

*******************************************************************************/
#include <stdio.h>
#include <math.h>
#include "raiz.h"

double bisec_teste(double x) {
	return pow(x, 3) - x*sin(2*x) + 0.2;
}

double pf_teste(double x) {
	return (cos(x)+2.0)/3.0;
}

int main(int argc, const char * argv[]) {
	double a = 0.25, b = 0.5, p = 6, x0 = 1.0;
	double raio = 1.0, volume = 4.0/3.0*M_PI / 2.0;
	
	// Teste bissecao
	printf("Teste bissecao\n");
	printf("funcao = pow(x, 3) - x*sin(2*x) + 0.2\n");
	printf("limites: inf = %.7g \tsup = %.10g\n", a, b);
	printf("precisao = %.7g \n", p);
	printf("bissecao = %.7g \n", bissecao(a, b, p, bisec_teste));
	printf("\n");
	
	// Teste altura_agua
	printf("Teste altura_agua\n");
	printf("raio = %.7g \tvolume = %.7g\n", raio, volume);
	printf("altura_agua = %.7g \n", altura_agua(raio, volume));
	printf("\n");
	
	// Teste pontofixo
	printf("Teste pontofixo\n");
	printf("funcao = (cos(x)+2)/3\n");
	printf("x0 = %.7g\n", x0);
	printf("epsilon = %.7g \n", p);
	printf("pontofixo = %.7g \n", pontofixo(x0, pow(10, -p), pf_teste));
	printf("\n");
	
	// Teste fraiz
	printf("Teste fraiz\n");
	printf("fraiz(3) = %.7g \n", fraiz(3));
	printf("\n");
	
    return 0;
}
