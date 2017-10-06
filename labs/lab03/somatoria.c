#include <stdio.h>

unsigned int somatoria( unsigned int );
unsigned int somatoria_caudal( unsigned int, unsigned int );

/* Função main do programa */
int main() {
    int valor;
    scanf("%d", &valor);
    printf("Somatória recursiva: %d\n", somatoria(valor));
    printf("Somatória recursiva caudal:  %d\n", somatoria_caudal(valor, valor));
    return 0;
}

/* Somatória recursiva */
unsigned int somatoria( unsigned int n )
{
    if ( n == 1 ) return 1;
    return n + somatoria( n-1 );
}

/* Somatória com recursão caudal */
unsigned int somatoria_caudal( unsigned int n, unsigned int acumulador )
{
    if ( n == 0 ) return acumulador;
    return somatoria_caudal( n-1, n-1 + acumulador );
}
