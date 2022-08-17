#include <stdio.h>
#include <stdlib.h>

int main(){

    int x = 0;

    x+=1;
    
    while (x < 11)
    {
        printf("%i msg\n", x);
        x+=1;

    }

    /*
    1. += -> soma 
    2. -= -> subtracao
    3. *= -> multiplicacao
    4. /= -> divisão
    5. %= -> resto da divisão
    */

    system("cls");

    
    int i = 50;
    printf("i += 45 = %i\n", i+=45);
    printf("i -= 45 = %i\n", i-=45);
    printf("i *= 45 = %i\n", i*=45);
    printf("i /= 45 = %i\n", i/=45);
    printf("i %%= 45 = %i\n", i%=45);
    return 0;
}
