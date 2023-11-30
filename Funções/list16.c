// Crie uma função recursiva que receba por parâmetro um vetor de inteiros e retorne o menor
// elemento do vetor

#include <stdio.h>

int menorN(int vetor[], int t)
{

    if (t == 1)
    {
        return vetor[0];
    }
    else
    {
        int menorResto = menorN(vetor, t - 1);

        return (vetor[t - 1] < menorResto ? vetor[t - 1] : menorResto);
    }
}

int main()
{

    int tamanho;
    printf("Entre com a quantidade de elementos: ");
    scanf("%d", &tamanho);

    int mat[tamanho];

    printf("Entre com os elementos desejados: ");
    for (int i = 0; i < tamanho; i++)
    {
        scanf("%d", &mat[i]);
    }

    int menor = menorN(mat, tamanho);

    printf("Menor elemento: %d", menor);

    return 0;
}