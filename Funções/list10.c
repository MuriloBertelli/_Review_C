// Elaborar uma função que receba 3 números e retorne o maior deles. Testar a função. Exemplo:
// se os números forem 2, 4 e 9, ela retornará 9.

#include <stdio.h>
int maiornum(int num1, int num2, int num3)
{

    if (num1 > num2 && num1 > num3)
    {
        return num1;
    }
    else if (num3 > num2)
    {
        return num3;
    }
    else
    {
        return num2;
    }
}

int main()
{

    int a, b, c, maior;

    printf("Entre com trez valores: ");
    scanf("%d %d %d", &a, &b, &c);

    maior = maiornum(a, b, c);

    printf("Maior valor : %d", maior);
    return 0;
}