#include <stdio.h>

unsigned int fatorial( unsigned int );
unsigned int binomial( unsigned int, unsigned int );


/* Função main */
int main() {
    unsigned int n, k;
    scanf("%u %u", &n, &k);
    if( n >= k ) {
        printf("%u\n", binomial(n, k));
    } else {
        printf("O valor de n deve ser maior ou igual ao de k\n");
    }
    return 0;
}


/* Função que calcula o fatorial de um valor */
unsigned int fatorial(unsigned int valor)
{
    unsigned int resultado;
    resultado = valor;
    if( valor > 0 ) {
        while( valor > 1 ){
            valor--;
            resultado *= valor;
        }
    } else {
        resultado = 1;
    }
    return resultado;
}

unsigned int binomial( unsigned int n, unsigned int k )
{
    unsigned int resultado;
    resultado = fatorial(n);
    resultado /= fatorial(k) * fatorial(n - k);
    return resultado;
}
