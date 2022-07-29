#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1, num2;

    num1 = 15;
    num2 = 45;

    int soma = num1+num2;
    printf("The sum result is = %i\n", soma);

    int sub = num2-num1;
    printf("The subtraction result is = %i\n", sub);

    int mult = num1*num2;
    printf("The multiplication result is = %i\n", mult);

    int div = num2 / num1;
    printf("The division result is = %i\n", div);

    return 0;
}
