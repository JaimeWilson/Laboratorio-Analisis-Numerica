
/* JAIMEWILSON */

#include <stdio.h>
#include <math.h>
#include "taylor.h"

int main(int argc, const char * argv[]) {
    // O valor de x tem que ser em radianes
	//double x = 	M_PI_4;
	// x = {π/10, π/8, π/6, π/4, π/3}.
	
	double x = 	0;
	
	// Teste tan
	printf("Teste tan1\n");
	printf("tan1(%f) = %lf \n", x, tan1(x));
	printf("tan(%f)  =  %lf \n", x, tan(x));
	printf("\n");
	
	/*// Teste tan1_erro
	printf("Teste tan1_erro\n");
	printf("tan1_erro(%f) = %lf \n", x, tan1_erro(x));
	if (tan1_erro(x) >= fabs(tan(x) - tan1(x))) {
		printf("Aproximacao correta\n");
	}
	else {
		printf("Aproximacao errada\n");
	}
	printf("\n");*/

	
    return 0;
}

