#include <stdio.h>


/* Faz a soma de Gauss até o valor n */
int main() {
    
    int n, i, soma;
    
    scanf("%d", &n);
    soma = 0;

    for ( i = 0; i <= n; i++ ) {
        soma += i;
    }

    printf("%d\n", soma);

    return 0;
}
