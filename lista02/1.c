#include <stdio.h>

int impar( int );

/* Função main */
int main() {
    int x;
    scanf("%d", &x);
    printf("%d\n", impar(x));
    return 0;
}

/* Verifica se o valor é par, retornando 1 no caso verdadeiro */ 
int impar( int x )
{
    if ( x % 2 == 0 ) return 0;
    return 1;
}
