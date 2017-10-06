#include <stdio.h>

unsigned long long int digitos_soma( unsigned long long int );
unsigned long long int digitos_soma_caudal( unsigned long long int, unsigned long long int );


/* Função main */
int main() {
    unsigned long long valor;
    scanf("%llu", &valor);
    printf("Soma dos dígitos recursiva: %llu\n", digitos_soma(valor));
    printf("Soma dos dígitos recursiva caudal: %llu\n", digitos_soma_caudal(valor, valor)); 
    return 0;
}

/* Contagem de dígitos recursiva */
unsigned long long int digitos_soma( unsigned long long int numero )
{
    if ( numero < 10 ) return numero;
    return numero%10 + digitos_soma( numero/10 );
}

/* Contagem de dígitos com recursão caudal */
unsigned long long int digitos_soma_caudal( unsigned long long int numero, unsigned long long int acumulador )
{
    if ( numero < 10 ) return acumulador;
    return digitos_soma_caudal( numero/10, (numero/10)%10 + acumulador);
}
