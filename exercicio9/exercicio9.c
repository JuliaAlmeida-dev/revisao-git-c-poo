#include <stdio.h>
#include <stdlib.h> 

typedef struct Aluno {
    char nome[100];
    int faltas;
    float nota;
} aluno_t;

int main() {
    // Alocação dinâmica do ponteiro para a estrutura
    aluno_t *ptr_aluno = (aluno_t *) malloc(sizeof(aluno_t));

    // Verificação de segurança: se o malloc falhar, ele retorna NULL
    if (ptr_aluno == NULL) {
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    // Leitura dos dados do usuário
    printf("Digite o nome do aluno: ");
    fgets(ptr_aluno->nome, 100, stdin); 

    printf("Digite a nota: ");
    scanf("%f", &ptr_aluno->nota);

    printf("Digite a quantidade de faltas: ");
    scanf("%d", &ptr_aluno->faltas);

    // Exibição dos dados e verificação de aprovação

    printf("\n--- Dados do Aluno ---\n");
    printf("Nome: %s", ptr_aluno->nome);
    printf("Nota: %.2f\n", ptr_aluno->nota);
    printf("Faltas: %d\n", ptr_aluno->faltas);

    if (ptr_aluno->nota >= 7.0 && ptr_aluno->faltas <= 10) {
        printf("Situacao: APROVADO\n");
    } else {
        printf("Situacao: REPROVADO\n");
    }

    // Liberação da memória alocada
    free(ptr_aluno);

    return 0;
}