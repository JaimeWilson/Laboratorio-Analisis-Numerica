clc         % Apaga tudo o escrito na janela de conandos
clear all   % Apaga as variáveis usadas anteriornente
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% ESCOAMENTO DE UM LIQUIDO NAO NEWTONIANO EM UM TUBO
% Data: 11-03-2018
% Autores: Jaime Castañeda Barbosa
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% ENTRADA DE DADOS 
L = 1;
Va = 10;
Vb = 0;

disp('   EDO NAO LINEAR ');
disp( ' ');
disp('   DADOS DE ENTRADA  ');
disp( '  ----- -- -------  ');
disp( ' ');
K      = input(' Coeficiente  (K): ');
N      = input(' Número de nós N : ');
disp( ' ');

Dx=L/(N-1);

%  Chute Inicial para o Perfil de Velocidade:
for i=1:N
    x(i)=(i-1)*Dx;
    v(i,1) = 0;
%    v(i,1)=Va-(Va-Vb)/L * x(i);
end

erro = 1;
ERRO_MAX = 10^-5;
ITER_MAX = 20;

% Calculo do vetor residuo inicial

[res] = calc_residuo(N, Dx, K, Va, Vb, v);
norm_res = norm(res);
 
iter = 1;

% Metodo de Newton

while (norm_res > ERRO_MAX) & (iter < ITER_MAX)
    [J] = calc_jac(N, Dx, K, Va, Vb, v);  
    DV = pinv(J)*(-res');   
    v = v + DV;   
    [res] = calc_residuo(N, Dx, K, Va, Vb, v); 
    iter = iter+1
    norm_res = norm(res)
end
    
if (norm_res > ERRO_MAX) 
    disp('NAO CONVERGIU ');
else
    plot(x,v);
end





