#include <stdio.h>

/* Recebe 10 valores e calcula a soma e a média desses números */
int main() {

    int i, entrada, soma;

    soma = 0;

    for ( i = 0; i < 10; i++ ) {
        scanf("%d", &entrada);
        soma += entrada;
    }

    printf("soma = %d\n", soma);
    printf("media = %.1f\n", soma / 10.00);

    return 0;
}
