// Crie um programa para ler a nota de um estudante. Se a nota for igual ou acima de 7.0, informar
//"Estudante aprovado". Se a nota estiver entre 4.0 (inclusive) e 7.0 (exclusive), informar "Estudante
// em recuperação". E se estiver abaixo de 4.0 informar "Estudante reprovado".

#include <stdio.h>

int calculoM(float *m, int nota1, int nota2, int nota3)
{

    *m = (nota1 + nota2 + nota3) / 3;
}

int main()
{

    int nota1, nota2, nota3;
    float media;

    printf("Digite as treis notas suas tiradas na prova: ");

    scanf("%d %d %d", &nota1, &nota2, &nota3);

    calculoM(&media, nota1, nota2, nota3);
    printf("Media: %d \n", media);

    if (media >= 7)
    {
        printf("Voce esta de recuperacao final!\n");
    }
    else if (media >= 4)
    {
        printf("voce esta reprovado!\n");
    }
    else {
        printf("Voce esta reprovado!\n");
    }

    return 0;
}