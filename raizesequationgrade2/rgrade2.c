/******************************************************************************
Jaime Andres Castañeda Barbosa 
Calculo das raizes de 2 grau

*******************************************************************************/
#include <stdio.h>
#include<math.h>

int main()
{
    double a, b, c;                                         /* coeficientes*/
    double x1, x2;                                          //raizes
    double alpha;
    printf("Entre com os coeficientes (a b c): ");
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    if(a==0){
        printf("valor de a não pode ser zero.");            //a esta dividindo a equação quadratica
        return 1;
    }
    alpha = b*b -4*a*c;                                      //valores dentro da raiz
    if(alpha <0){
        printf("raizes imaginarias.");
        
    }
    else if (alpha == 0.0){
        x1 = -b / 2*a;                //a raiz é zero só temos uma divisão
        printf("Uma raiz real : %f", x1);
    }
    else{
        alpha = sqrt(alpha);
        x1 = (-b + alpha) / (2*a);
        x2 = (-b - alpha) / (2*a);
        printf("Duas raizes reais: %f e %f", x1, x2);
    }
    
    return 0;
}
