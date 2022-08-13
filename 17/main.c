#include <stdio.h>
#include <stdlib.h>

int main(){

    /*
        == compara��o
        != diferen�a
    */

    int i = 10;
//
//    printf("%i\n", i==1); //Compara��o se i � igual a 1
//    printf("%i\n", i!=1); // Compara��o se i � diferente de 1
//
//    printf("%i\n", !(i==1)); // Compara a nega��o do valor a 1.

    printf("Digite um numero != de 5: \n");
    scanf("%i", &i);

    if(i!=5){
        printf("TRUE\n");
    } else {
        printf("FALSE\n");
    }

    return 0;
}
