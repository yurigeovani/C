#include <stdio.h>
#include <stdlib.h>

int main(){
    int x = 0;
    int valDigitado = 0;

    printf("Informe a quantidade de vezes que voce deseja repetir a instrucao: ");
    scanf("%x", &valDigitado);

    while (x < valDigitado)
    {
        printf("%i\n", x * 10);
        x++;
    }
    
    return 0;
}
