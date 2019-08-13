#include <stdio.h>
#include <string.h>

void main() {

    char palavrasecreta[20];
    sprintf(palavrasecreta, "MELANCIA");

    int acertou = 0;
    int enforcou = 1;

    do {
        char chute;
        printf("Qual letra? ");
        scanf("%c", &chute);

        for(int i = 0; i < strlen(palavrasecreta); i++) {
            printf("Estou vendo a letra %c na posicao %d\n", palavrasecreta[i], i);
            if (palavrasecreta[i] == chute)
            {
                printf("A posição %d tem essa letra!\n\n\n", i);
            }
        }
        printf("\n");

    } while (1);

}