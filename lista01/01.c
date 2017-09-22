#include <stdio.h>

/* Recebe um inteiro e identifica se o valor é par ou ímpar. */
int main() {

    int entrada;
    scanf("%d", &entrada);

    if ( entrada % 2 == 0 ) {
        printf("par\n");
    } else {
        printf("impar\n");
    }
    return 0;
}
