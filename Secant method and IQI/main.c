/******************************************************************************

JAIME ANDRÉS CASTAÑEDA BARBOSA    2018

Metodo da Secante

*******************************************************************************/
#include <stdio.h>
#include <math.h>
#include "SecIQI.h"

double f(double x) {
	//return sin(x) - pow(x, 3) + x;                           // Função a analisar pode ser qualquer função
	return pow(x, 3) + x - 7; 
}

void calculoRaiz(double x0, double x1, double x2) {
	double r_sec = 0.0, r_IQI = 0.0, k = 8;
	
	printf("x0 = %.6g / x1 = %.6g / x2 = %.6g\n", x0, x1, x2);
	printf("Secante >> Numero de Iterações: %d valor da Raiz: %.6f \n", secante(x0, x1, k, &f, &r_sec), r_sec);
	printf("IQI >> Numero de Iterações: %d valor da Raiz: %.6f \n", IQI(x0, x2, x1, k, &f, &r_IQI), r_IQI);
	printf("\n");
	
	printf("-----------------------------------------------------------\n");
}

int main(int argc, const char * argv[]) {
	
	printf("METODO DA SECANTE E INTERPOLAÇÃO QUADRATICA INVERSA\n");
	printf("Calculo da raiz de f(x) = x^3 + x - 7\n");
	printf("-----------------------------------------------------------\n\n");
	calculoRaiz(2.0, 5.0, 3.5);
	calculoRaiz(-8.0, 3.0, -2.0);           
	calculoRaiz(50, 100, 800);
	calculoRaiz(0, 5.0, 2.0);
	calculoRaiz(0, 8.0, 1.0);
	
    return 0;
}
