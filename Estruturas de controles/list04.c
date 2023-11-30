// A Amplitude amostral é uma medida de dispersão, ela é calculada como a diferença entre o valor
// máximo e o valor mínimo de uma amostra. Elabore um programa que leia um conjunto de 10 valores
// inteiros e então mostre o valor máximo, o valor mínimo e a amplitude amostral do conjunto
// fornecido

#include <stdio.h>

int main()
{

    int valores[10];
    int max, min, amplitude;

    printf("Digite 10 valores inteiros: ");
    scanf("%d", &valores[0]);
    max = min = valores[0];

    for (int i = 1; i < 10; i++)
    {
        scanf("%d", &valores[i]);
        if (valores[i] > max)
        {
            max = valores[i];
        }
        if (valores[i] < min)
        {
            min = valores[i];
        }
    }

    amplitude = max - min;

    printf("Valor de maximo é: %d\n", max);
    printf("Valor de minimo é: %d\n", min);
    printf("Amplitude: %d\n", amplitude);
}