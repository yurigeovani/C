#include <stdio.h>
#include <stdlib.h>

int main(){

    /*
        == comparação
        != diferença
    */

    int i = 10;
//
//    printf("%i\n", i==1); //Comparação se i é igual a 1
//    printf("%i\n", i!=1); // Comparação se i é diferente de 1
//
//    printf("%i\n", !(i==1)); // Compara a negação do valor a 1.

    printf("Digite um número != de 5: \n");
    scanf("%i", &i);

    if(i!=5){
        printf("TRUE");
    } else {
        printf("FALSE");
    }

    return 0;
}
