#include <stdio.h>

int fibMen[1000];

int fib( int n )
{
    int soma;
    if ( n == 0 ) return 0;
    if ( n <= 2 ) return 1;
    if ( fibMen[n] == 0 )
        fibMen[n] = fib(n-1) + fib(n-2);
    return fibMen[n];
}

int main() {
    int n;
    int soma;
    fibMen[1] = 1;
    fibMen[2] = 1;
    scanf("%d", &n);
    printf("%d\n", fib(n));
    return 0;
}
