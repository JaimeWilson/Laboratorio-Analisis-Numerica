% Metodos numericos     Ano 2017 
% Multiplicação de matrizes
% PUC-Rio Jaime Andrés Castañeda Barbosa

%Programa para calculo das raizes de uma equação do 2 grau

clear all
clc

repetir = true;
while (repetir)
    disp('Entre com os coeficientes:');
    
    A = input('A=');
    B = input('B=');
    C = input('C=');
    
    disc = B^2-4*A*C;
       
    if (A == 0)
       if (B == 0)
           disp('nao existe equacao');
       else
           x1 = -C/B;
           disp('equacao possui uma raiz.');
           disp('raiz=');
           x1
       end
    else
        if (disc < 0.)
            disp('equacao nao possui raiz real');
            disp('');
        elseif (disc == 0.)
            x1 = -B/2*A
            disp('equacao possui somente uma raiz');
            disp('raiz=');
            x1
        else
            x1 = (-B+disc^0.5)/(2*A);
            x2 = (-B-disc^0.5)/(2*A);
            disp('equacao possui duas raizes');
            disp('raizes=');
            x1
            x2
        end
    end
    resposta = input('calcular outra raiz (0-N/1-S)?');
    switch resposta
        case 0 
            repetir = false;
        case 1
            repetir = true;
    end
end
