#include <stdio.h>
#include <time.h>
#include <limits.h>

#define BIGNUM ULONG_MAX
//#define BIGNUM INT_MAX
//#define BIGNUM 10000
//#define BIGNUM 99999

typedef unsigned long int ulint;

ulint f1 ( ulint x )
{
	int soma = 0;
	while ( x ) {
		soma += x%2;
		x /= 2;
	}
	return soma;
}

ulint f2 ( ulint x )
{
	int soma = 0;
	while (x >>= 1)
		soma +=  x & 1; 
	return soma;
}

int main ( void ) {

	clock_t tempo_init, tempo_fim;
	double tempo_gasto;
	ulint soma = 0;

	// Variaveis para entrada
	int entrada;
	scanf("%d", &entrada);

	tempo_init = clock();
	for ( int i = 0; i < BIGNUM; i++ ) {
		soma = f1(entrada);
	}
	tempo_fim = clock();
	tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
	//printf("Tempo gasto na versao normal: %lf\n", tempo_gasto);

	tempo_init = clock();
	for ( int i = 0; i < BIGNUM; i++ ) {
		soma = f2(entrada);
	}
	tempo_fim = clock();
	tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
	//printf("Tempo gasto na versao bitwise: %lf\n", tempo_gasto);

	// Resposta
	printf("%d\n", soma);

	return 0;
}
