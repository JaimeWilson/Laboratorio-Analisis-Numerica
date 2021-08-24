//Funciones

#ifndef raiz_h
#define raiz_h

#include <stdio.h>

// Determina a raiz usando o metodo da bissecao, onde o erro avaliado tenha precisao
// de p digitos, isto e, e < 0.5*10^(−p).
// Sua funcao tambem deve receber como parametro a funcao f(x) cuja raiz deseja-se calcular.
double bissecao (double a, double b, int p, double (*f) (double x));

// Calcula a altura do nivel da agua dado o raio e o volume, usando a funcao do item anterior
double altura_agua (double r, double v);

// Determina o ponto fixo de uma dada g(x).
// Sua funcao deve receber tambem um valor de tolerancia epsilon e
// retornar x(n) tal que |x(n) −x(n−1)| < epsilon, onde n representa o numero da iteracao
double pontofixo (double x0, double epsilon, double (*g) (double x));

// Determina a raiz quadrada de um numero z via a determinacao do ponto fixo
// da funcao g(x) = ((x−z)/x)/2, com precisao de 6 digitos.
double fraiz (double z);

#endif /* raiz_h */
