#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


bool isValid(float nota){
    if(nota>=0 && nota<=10){
        return true;
    }
}

int main(){

    int bimestres = 4;
    float notas[bimestres], media;

    printf("########## MEDIA ESCOLAR ##########\n");
    printf("Informe as notas de cada bimestre:\n");

    for(int i=0;i<bimestres;i++){
        float nota;

        printf("%i: ", i+1);
        scanf("%f", &nota);
        
        while(!isValid(nota)){
            printf("Nota invalida! Digite uma nota entre 0 e 10 (inclusives)!\n");
            printf("%i: ", i+1);
            scanf("%f", &nota);
        }

        notas[i] = nota;
        media += nota;
    }

        printf("\nResultado: %.2f\n", (media/bimestres));
    return 0;
}