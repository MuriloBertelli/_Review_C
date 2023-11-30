// Faça uma função recursiva que receba um número inteiro positivo N e imprima todos os
// números naturais de 0 até N em ordem decrescente.

#include <stdio.h>

void imprimecrescente(int n)
{

    if (n < 0)
    {
        return; // Caso base: se n é menor que 0, a função retorna sem fazer nada.
    }
    else
    {
        imprimecrescente(n - 1); // Chamada recursiva com n - 1.
        printf("%d ", n);        // Imprime o número atual após a chamada recursiva retornar.
    }
}

int main()
{
    int n;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    imprimecrescente(n);
}