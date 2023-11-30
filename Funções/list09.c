// Elaborar uma função que receba 3 números e retorne o menor deles. Testar a função. Exemplo: se
// os números forem 2, 4 e 9, ela retornará 2

#include <stdio.h>

int menornumero(int num1, int num2, int num3)
{
    if (num1 < num2 && num1 < num3)
    {
        return num1;
    }
    else if (num2 < num3)
    {
        return num1;
    }
    else
    {
        return num3;
    }
}
int main()
{

    int a, b, c, menor;
    printf("Digite 3 numeros: ");
    scanf("%d %d %d", &a, &b, &c);

    menor = menornumero(a, b, c);

    printf("Menor numero: %d", menor);

    return 0;
}