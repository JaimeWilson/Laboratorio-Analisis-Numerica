% Solção pelos Metodos numericos pelo metodo da Bisseção 
% Engenharia Civil e Ambiental---  PUC-Rio.
% Jaime Andrés Castañeda Barbosa 2109
disp('Bissecao');
disp('');

Prod = 1;
Maxister = 22;

while Prod > 0
    x1 = input('Entre o valor do limite esquerdo x1 = ');
    disp('');
    fx1 = f1(x1);
    xr = input('Entre o valor do limite direito xr = ');
    disp('');
    fxr = f1(xr);
    Prod = fx1*fxr;
    
    if (Prod > 0)
        disp('Entre com novos valores iniciais tal que f(x1)*f(xr)<0 ');
    end
end
xm = (x1+xr)/2;
fxm = f1(xm);
erro = abs(fxm);
k = 1;              %Contador de interações
while (erro > 1e-7) & (k < Maxister)
    if (fxm*fxr < 0)
        x1 = xm;
    end
    if (fxm*fx1 < 0)
        xr = xm;
    end
    
    xm = (x1+xr)/2;
    fxm = f1(xm);
    erro = abs(fxm);
    
    disp('interacao');
    disp(k);
    disp('erro');
    disp(erro);
    k = k + 1;
end
if (k==Maxister)
    disp('nao conveerguiu');
else
    disp('');
    disp('Solucao pelo metodo da bissecao');
    disp('_ _ _ _ _ _ _ _ _ _ _ ');
    disp('A raiz "x" é = ');
    disp('');
    disp(xm);
    disp('');
    disp('numero de interacoes = ');
    disp('');
    disp(k);
end
