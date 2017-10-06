#include <stdio.h>

unsigned long long int digitos( unsigned long long int );
unsigned long long int digitos_caudal( unsigned long long int, unsigned long long int );


/* Função main */
int main() {
    unsigned long long int valor;
    scanf("%llu", &valor);
    printf("Contagem recursiva: %llu\n", digitos(valor));
    printf("Contagem recursiva caudal: %llu\n", digitos_caudal(valor, 1)); 
    return 0;
}

/* Contagem de dígitos recursiva */
unsigned long long int digitos( unsigned long long int numero )
{
    if ( numero < 10 ) return 1;
    return 1 + digitos( numero/10 );
}

/* Contagem de dígitos com recursão caudal */
unsigned long long int digitos_caudal( unsigned long long int numero, unsigned long long int acumulador )
{
    if ( numero < 10) return acumulador;
    return digitos_caudal( numero/10, 1 + acumulador);
}
