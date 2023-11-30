// Faça uma função recursiva que receba um número inteiro positivo N e imprima todos os
// números naturais de 0 até N em ordem crescente.

#include <stdio.h>

void imprimirCrescente(int n, int atual)
{

    if (atual > n)
    {
        return;
    }
    else
    {
        printf("%d ", atual);
        imprimirCrescente(n, atual + 1);
    }
}

int main()
{

    int n;
    printf("Entre com um numero inteiro e positivo: ");
    scanf("%d", &n);

    imprimirCrescente(n, 0);
}