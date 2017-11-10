#include <stdio.h>
#include <math.h>

int decimal( int );
int binario( int );

/* Função main */
int main () {
    int x, opcao;
    scanf("%d %d", &x, &opcao);
    if ( opcao == 1 ) {
        printf("%d\n", binario(x));
    } else if ( opcao == 2 ) {
        printf("%d\n", decimal(x));
    }
    return 0;
}

int decimal( int x )
{
    if ( !(x/10) ) return x;
    return (x % 10 + decimal(x/10) * 2);
}

int binario ( int x )
{
    static int i = 1;
    if ( !(x/2) ) return x;
    return ((x % 2) + binario(x/2)*pow(10, i));
}
