#include <stdio.h>


/* Calcula o fatorial de x (x!) */
int main() {
    int x, i, fatorial;
    scanf("%d", &x);

    fatorial = x;
    do {
        x--;
        if ( x > 0 ) {
            fatorial *= x;
        }
    }
    while ( x );

    printf("%d\n", fatorial);

    return 0;
}
