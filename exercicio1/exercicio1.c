#include <stdio.h>

 int main(){
 int a= 1,b =2,c =3,d=4, e=5;
 printf("a*b/ c=%.3f\n",(float)a*b/ c);
 printf("a*b%% c+1=%d\n",a *b%c+ 1);
 printf("++a*b- c-- =%d\n",++a*b-c--);
 printf("7--b *++d=%d\n",7 - - b*++d);
 printf("a/b/ c=%.3f\n",(float)a/b/ c);
 printf("7+c*--d/e=%.3f\n",7 +c*--d/ (float)e);
 printf("2*a%%-b+c+ 1=%d\n",2*a %-b+ c+1);
 printf("39/-++e- +29%%c= %.3f\n", 39.0 /-++e-+ 29%c);
 printf("7-+++a %% (3+b)=%d\n",7-+ ++a%(3+b));

 return 0;
 }

 /* 
 Código testado :
 PS C:\Users\user\Documents\meu_projeto2.0\revisao-git-c-poo\exercicio1> .\exercicio1
a*b/ c=0.667
a*b% c+1=3
++a*b- c-- =1
7--b *++d=17
a/b/ c=0.500
7+c*--d/e=8.600
2*a%-b+c+ 1=3
39/-++e- +29%c= -7.500
7-+++a % (3+b)=4
PS C:\Users\user\Documents\meu_projeto2.0\revisao-git-c-poo\exercicio1> 

Analise das variaveis:

Na linha 5, em que a*b / c = 0.667, primeiro a variavel "a" é convertida para float em seguida acontece a multiplicação
e depois a divisão por c que resulta em aproximadamente 0.667.

Na linha 6, em que a*b% c+1=3, primeiro ocorre a multiplicação a*b, depois calcula-se o resto da divisão de dois por c
e por fim é somado 1 ao resultado final.

Na linha 7, em que ++a*b- c-- =1, o operador ++ incrementa "a" antes da operação, então a passa de 1 para 2, 
depois ocorre a multiplicação 2*2 = 4, ja o operador c-- utiliza o valor atual de c que é 3 na operação e 
depois decrementa a variável para 2. Por fica o cálculo fica4 - 3 = 1, no fim dessa linha a passa a ser 2 e c tambem.

Na linha 8, em que 7--b *++d=17, primeiramente acontece o decremento de "b", logo b que antes era 2 passa a ser 1, 
depois o incremento de "d", em seguida a multiplicação de 1 por 5 e por fim a subtração.

Na linha 9, em que a/b/ c=0.500, a variavel "a" é convertida para float em sguida a primeira divisaõ e dpois a segunda.

Na linha 10, em que 7+c*--d/e=8.600,  acontece o decremento de "d" que antes 5 passa a ser 4, depois a multiplicação
em seguida a divisão e por fim soma-se 7.

Na linha 11, em que 2*a%-b+c+ 1=3, primeiro ocorre a multiplicação 2*a (2*2 = 4), depois calcula-se o resto
da divisão por -b (4 % -1 = 0) e em seguida somam-se os valores restantes 0 + 2 + 1 = 3.

Na linha 12, em que 39/-++e- +29%c= -7.500, primeiro ocorre o incremento de e (++e), fazendo e passar de 5 para 6, 
depois aplica-se o sinal negativo, resultando em -6. A divisão então é 39 / -6 = -6.5 e por fimm  calcula-se 29 % c (29 % 2 = 1).

Na linha 13, em que 7-+++a % (3+b)=4, acontece o incremento de a (++a), fazendo a passar de 2 para 3, depois calcula-se 3 + b (3+1 = 4),
em seguida calcula-se o resto da divisão 3 % 4 = 3 e por fim realiza-se a subtração 7 - 3 = 4. 


 */