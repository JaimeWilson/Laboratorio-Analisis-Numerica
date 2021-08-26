/* Aqui coloco todas minhas funções */
#include <stdio.h>
#ifndef SecIQI_h
#define SecIQI_h

// Implementa o metodo da secante para determinacao de raizes de funcoes.
int secante (double x0, double x1, int k, double (*f) (double x), double* r);      // o valor de k é o valor da precisão

// Calcula a raiz de uma funcao segundo o metodo IQI
int IQI (double x0, double x1, double x2, int k, double (*f) (double x), double* r);

#endif /* SecIQI_h */
