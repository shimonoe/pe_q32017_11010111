#include <stdio.h>

int verifica_palindromo( int, int );

int main () {
    int n;
    scanf("%d", &n);
    if ( n == verifica_palindromo(n, 0)){
        printf("sim!\n");
    } else {
        printf("nao!\n");
    }
    return 0;
}

int verifica_palindromo( int n, int soma )
{
    int r;
    if ( n != 0 ) {
        r = n % 10;
        soma = soma * 10 + r;
        verifica_palindromo(n/10, soma);
    }
}
