#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


void validarNota(float nota){

    if(nota>10){
        printf("Nova invalida! Insira um valor entre 0 e 10 (inclusives)!\n");
        return false;
    }
    return true;
}


int main(){

    int bimestres = 4;
    float notas[bimestres], media;

    printf("########## MEDIA ESCOLAR ##########\n");
    printf("Informe as notas de cada bimestre:\n");

    for(int i=0;i<bimestres;i++){
        while()
        printf("%i: ", i+1);
        scanf("%f", &notas[i]);

        validarNota(notas[i]);

        media += notas[i];
    }

        printf("\nResultado: %f", (media/bimestres));
//    scanf("%f", &num1);

//    printf("\nO valor da soma eh %.2f.", validarNota(num1));

    return 0;
}


