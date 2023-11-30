// Elabore um programa que leia três valores numéricos quaisquer e os imprima em ordem crescente.

#include <stdio.h>

int main()
{

    int a, b, c, result;

    printf("Entre com treis valores: ");
    scanf("%d %d %d", &a, &b, &c, &result);

    if (a > b)
    {
        result = a;
        a = b;
        b = result;
    }

    if (a > c)
    {
        result = a;
        a = c;
        c = result;
    }

    if (b > c)
    {
        result = b;
        b = c;
        c = result;
    }

    printf("Oredem crescente Sera: %d %d %d", a, b, c);
}
