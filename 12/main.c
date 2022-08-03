#include <stdio.h>
#include <stdlib.h>

int main(){


//    scanf("tipo_de_entrada", variavel_que_recebera);

//    scanf("%tipo1%tipo2", &var1, &var2);

    int num1, num2, adicao, subtracao, multiplicacao, divisao;

    printf("Digite o numero 1: ");
    scanf("%i", &num1);

    printf("Digite o numero 2: ");
    scanf("%i", &num2);


    printf("RESULTADOS!\n");
    printf("Soma:\n");
    adicao = num1 + num2;
    printf("%i + %i = %i\n", num1, num2, adicao);

    printf("Subtracao:\n");
//    subtracao = num1 - num2;
    if(num1>num2){
        subtracao = num1 - num2;
        printf("%i - %i = %i\n", num1, num2, subtracao);
    }else{
        subtracao = num2 - num1;
        printf("%i - %i = %i\n", num2, num1, subtracao);
    }

    printf("Multiplicacao:\n");
    multiplicacao = num1 * num2;
    printf("%i * %i = %i\n", num1, num2, multiplicacao);

    printf("Divisao:\n");
    if(num1>num2){
        divisao = num1 / num2;
        printf("%i / %i = %i\n", num1, num2, divisao);
    }else{
        divisao = num2 / num1;
        printf("%i / %i = %i\n", num2, num1, divisao);
    }


    return 0;
}
