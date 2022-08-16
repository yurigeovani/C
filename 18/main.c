#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isValid(float nota)
{
    if (nota >= 0 && nota <= 10)
    {
        return true;
    }
}

void approved(float media)
{
    if (media < 4)
    {
        printf("Disapproved!");
    }
    else if (media < 6)
    {
        printf("Recovery!");
    }
    else
    {
        printf("Approved!");
    }
}

int main()
{

    int bimestres = 4;
    float notas[bimestres], media;

    printf("########## MEDIA ESCOLAR ##########\n");
    printf("Informe a nota de cada bimestre:\n");

    for (int i = 0; i < bimestres; i++)
    {
        float nota;

        printf("%i: ", i + 1);
        scanf("%f", &nota);

        while (!isValid(nota))
        {
            printf("Nota invalida! Digite uma nota entre 0 e 10 (inclusives)!\n");
            printf("%i: ", i + 1);
            scanf("%f", &nota);
        }

        notas[i] = nota;
        media += nota;
    }

    media /= bimestres;

    approved(media);
    printf("\nResultado: %.2f\n", media);

    return 0;
}
