// Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um programa que
// calcule seu peso ideal utilizando as seguintes fórmulas:
// • para homens: (72.7*h) - 58;
// • para mulheres: (62.1*h) - 44.7 (sendo h = altura).
#include <stdio.h>

int main()
{
    float altura, pesoIdeal;
    char sexo;

    printf("Digite sua altura em metros (ex: 1.75): ");
    scanf("%f", &altura);

    printf("Digite seu sexo (M para masculino, F para feminino): ");
    scanf(" %c", &sexo);

    if (sexo == 'M' || sexo == 'm')
    {
        pesoIdeal = (72.7 * altura) - 58;
        printf("Seu peso ideal é: %.2f kg\n", pesoIdeal);
    }
    else if (sexo == 'F' || sexo == 'f')
    {
        pesoIdeal = (62.1 * altura) - 44.7;
        printf("Seu peso ideal é: %.2f kg\n", pesoIdeal);
    }
    else
    {
        printf("Sexo não reconhecido.\n");
    }

    return 0;
}