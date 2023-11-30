// Escreva um programa que leia um conjunto de números inteiros e que somente termine a leitura
// quando for fornecido um valor 0 (zero) imediatamente após um número ímpar positivo. Informe
// então qual foi o maior número ímpar fornecido.

#include <stdio.h>

int main()
{
    int num, maiorImpar = 0, anterior;

    printf("Digite uma sequência de números inteiros (termine com 0 após um ímpar positivo):\n");

    while (1)
    {
        scanf("%d", &num);

        // Verifica se o número é ímpar e maior que o maior ímpar registrado
        if (num % 2 != 0 && num > maiorImpar)
        {
            maiorImpar = num;
        }

        // Condição de término: 0 digitado após um ímpar positivo
        if (anterior % 2 != 0 && num == 0)
        {
            break;
        }

        anterior = num; // Atualiza o número anterior
    }

    if (maiorImpar == 0)
    {
        printf("Nenhum número ímpar positivo foi fornecido.\n");
    }
    else
    {
        printf("O maior número ímpar positivo fornecido foi: %d\n", maiorImpar);
    }

    return 0;
}