// Crie uma função que receba por parâmetro um vetor de inteiros e retorne o menor elemento do
// vetor.

#include <stdio.h>

int pegamenor(int vetor[], int t)
{

    int menor = vetor[0];

    for (int i = 1; i < t; i++)
    {
        if (vetor[i] < menor)
        {
            menor = vetor[i];
        }
    }

    return menor;
}

int main()
{
    int tamanho, menorelemento;
    printf("Quandos elemetos tera o vetor? ");
    scanf("%d", &tamanho);

    int meuVetor[tamanho];

    printf("Digite os elementos dos vetores: ");
    for (int i = 0; i < tamanho; i++)
    {
        scanf("%d", &meuVetor[i]);
    }

    menorelemento = pegamenor(meuVetor, tamanho);

    printf("O menor elemento do vetor e: %d\n", menorelemento);
}
