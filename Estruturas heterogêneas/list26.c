// Construir um programa que leia o
// nome, sexo e rendimentos de uma
// pessoa, guardando os dados em um vetor
// de struct (exemplo: rendPessoa RP[10],
// onde rendPessoa é um tipo struct). Em
// seguida, os dados lidos devem ser
// impressos (ler pelo menos 3 conjuntos de
// dados). Ao lado, um exemplo de entrada
// e saída para tal programa. Fazer algo com
// formatação similar.

#include <stdio.h>
#include <string.h>
struct rendePessoa
{
    char nome[50];
    char sexo;
    double rendimentos;
};

int main()
{

    struct rendePessoa RP[10];

    int n, i;

    printf("Quantoas pessoas voce quer registrar ? ");
    scanf("%d", &n);

    // ler os dados

    for (int i = 0; i < n; i++)
    {
        printf("\nEntrando com dados para pessoa %d\n", i + 1);
        printf("Nome: ");
        scanf("%s", RP[i].nome);

        printf("Sexo: (M/F)");
        getchar();
        scanf("%c", &RP[i].rendimentos);
    }

    // Imprimindo os dados
    printf("\nDados registrados:\n");
    for (i = 0; i < n; i++)
    {
        printf("\nNome: %s\n", RP[i].nome);
        printf("Sexo: %c\n", RP[i].sexo);
        printf("Rendimentos: %.2f\n", RP[i].rendimentos);
    }
}
