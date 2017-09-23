#include <stdio.h>


/* Sequência de Fibonacci para os n primeiros números */
int main() {

    int n, i;

    scanf("%d", &n);

    int fib[n];

    for ( i = 0; i <= n; i++ ) {
        if ( i == 0 ) {
            fib[i] = 0;
        } else if ( i == 1 ) {
            fib[i] = 1;
        } else {
            fib[i] = fib[i - 1] + fib[i - 2];
        }
        printf("%d", fib[i]);
        if ( i < n ) {
            printf(", ");
        } else {
            printf("\n");
        }
    }

    return 0;
}
