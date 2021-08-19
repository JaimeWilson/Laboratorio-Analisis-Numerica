#ifndef taylor_h
#define taylor_h

#include <stdio.h>

// Escreva uma função que use o polinomio de Taylor com 3 termos diferentes de zero para 
// avaliar tan(x), em torno da origem, x0 = 0. O prototipo da função deve ser:

double tan1 (double x);
//

// Usando polinomios de Tayler com 2 termos diferentes de zero para avaliar sin(x) e cos(x),
// em torno da origem, x0 = 0, escreva uma outra função para avaliar tan(x) como sendo
// uma razão entre esses dois polinômios, isto é, tan(x) = sin(x)/ cos(x). O protótipo da
// função deve ser:


double tan2 (double x);

// Usando a função tan da biblioteca math.h, escreva um teste para avaliar qual das duas
// aproximações tem menor erro no cálculo de tan(x) para x = {π/10, π/8, π/6, π/4, π/3}.

double tan1_erro (double x);

#endif /* taylor_h */