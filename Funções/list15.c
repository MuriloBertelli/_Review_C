// Crie uma função recursiva que retorne a soma dos elementos de um vetor de inteiros passado
// por parâmetro.

#include <stdio.h>

int somad(int vetor[], int t)
{
    if (t == 0)
    { // Caso base: se o tamanho do vetor for 0, retorne 0
        return 0;
    }
    else
    {
        return vetor[t - 1] + somad(vetor, t - 1); // Retorna o último elemento do vetor + soma do restante
    }
}

int main()
{
    int tamanho, soma;
    printf("Quandos elemetos tera o vetor? ");
    scanf("%d", &tamanho);

    int meuVetor[tamanho];

    printf("Digite os elementos dos vetores: ");
    for (int i = 0; i < tamanho; i++)
    {
        scanf("%d", &meuVetor[i]);
    }

    soma = somad(meuVetor, tamanho);

    printf("Soma dos elemetos é: %d\n", soma);
}