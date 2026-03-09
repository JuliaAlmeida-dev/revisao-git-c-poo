#include <stdio.h> 
int main() {

    int i;

    i = 0;

    while(i < 10) {
        printf("while: %d\n", i);
        i++;
    }

    do {
        printf("do:%d\n", i);
        i++;
    } while(i < 10);

    return 0;
}

/*
a) Saída do programa:

while: 0
while: 1
while: 2
while: 3
while: 4
while: 5
while: 6
while: 7
while: 8
while: 9
do:10

O laço while executa enquanto i < 10, imprimindo os valores de 0 até 9.
Após isso, i passa a valer 10. O do while executa primeiro e só depois
verifica a condição, por isso imprime "do:10" mesmo com a condição falsa.


b) Diferença entre while e do while:

O while primeiro verifica a condição e somente depois executa o bloco
de código. Se a condição for falsa desde o início, o bloco nunca será
executado.

O do while executa o bloco de código primeiro e somente depois verifica
a condição. Por isso ele sempre executa pelo menos uma vez.


c) Implementação equivalente usando for:

for(i = 0; i < 10; i++){
    printf("while: %d\n", i);
}


d) Diferença entre while e for:

O while é geralmente usado quando não sabemos exatamente quantas vezes
o laço irá executar, pois ele depende apenas de uma condição lógica.

O for é mais utilizado quando sabemos a quantidade de repetições,
pois ele reúne inicialização, condição e incremento em uma única linha,
deixando o código mais organizado para contagens ou iterações.
*/