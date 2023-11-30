// Elaborar uma função que receba 3 números e retorne o valor intermediário entre eles. Testar a
// função. Exemplo: se os números forem 2, 4 e 9, ela retornará 4

#include <stdio.h>

int numintermed(int num1, int num2, int num3)
{

    if (num1 <= num2 && num1 >= num3)
    {
        return num1;
    }
    else if (num2 >= num1 && num2 <= num3)
    {
        return num2;
    }
    else
    {
        return num3;
    }
}

int main()
{

    int a, b, c, intermediario;

    printf("Entre com trez valores: ");
    scanf("%d %d %d", &a, &b, &c);

    intermediario = numintermed(a, b, c);

    printf("Intermediario dos valores é: %d", intermediario);
}