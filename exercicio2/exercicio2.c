#include <stdio.h>

int main() {
    
    float nota, frequencia;

    printf("Digite a nota do estudante: ");
    scanf("%f", &nota);

    printf("Digite a frequencia do estudante (%%): ");
    scanf("%f", &frequencia);

    if (nota >= 7 && frequencia >= 75) {
        printf("Estudante aprovado!\n");
    } else {
        printf("Estudante reprovado.\n");
    }

    return 0;
}