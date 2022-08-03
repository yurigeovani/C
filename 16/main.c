#include <stdio.h>
#include <stdlib.h>

int main(){

    char c;
    printf("Digite uma letra: ");
    scanf("%c", &c);

    if(c >= 'a'){
        printf("Letra em maiuscula: %c", toupper(c));
    }
    return 0;
}
