#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*
           1) char
           2) int
           3) float
           4) double
           5) void - vazio

           modificadores de tipo:
           1. signed: declaramos variaveis e queremos utilizar numeros positivos e negativos.
           2. unsigned: queremos trabalhar apenas com numeros positivos.
           3. long: aumentar a capacidade de armazenamento da variavel.
           4. short: diminuir a capacidade de armazenamento da variavel.
       */

    int i;
    printf("i = %i bytes\n", sizeof(i));

    unsigned short int uSI;
    printf("uSI = %i bytes\n", sizeof(uSI));

    double d;
    printf("d = %i bytes\n", sizeof(d));

    unsigned short int uSD;
    printf("uSD = %i bytes\n", sizeof(uSD));

    return 0;
}