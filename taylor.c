#include "taylor.h"
#include <math.h>

double tan1 (double x) {
    
    //tres termos diferentes de zero x, x^3/3 e 2x^5/15 para a função tangente
    
	double p1, p3, p5;
	
	p1 = -(x - M_PI_2);                                                              // aproximação de um reta
	p1 *= 1.0;
	p3 = -(x - M_PI_2) * (x - M_PI_2) * (x - M_PI_2);                                // aproximação de uma parabola cubica
	p3 *= 2.0/6;
	p5 = -(x - M_PI_2) * (x - M_PI_2) * (x - M_PI_2) * (x - M_PI_2) * (x - M_PI_2);  // aproximação de uma parabola de grau 5  
	p5 *= 16.0/120;

	return  p1 + p3 + p5;
}

/*double tan1_erro (double x) {
	double p6 = -(x - M_PI_2) * (x - M_PI_2) * (x - M_PI_2) * (x - M_PI_2) * (x - M_PI_2);
	p6 *= 2.0/15;
	
	return fabs(p6);
}*/

