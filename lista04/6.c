#include <stdio.h>
#include <time.h>
#include <limits.h>

#define BIGNUM ULONG_MAX
//#define BIGNUM INT_MAX
//#define BIGNUM 10000
//#define BIGNUM 99999

typedef unsigned long int ulint;

ulint f1 ( ulint x, ulint y )
{
	return x > y;
}

ulint f2 ( ulint x, ulint y )
{
	if(x ^ y && (!(y ^ 0) || (x / y))) return 1;
	return 0;
}

int main ( void ) {

	clock_t tempo_init, tempo_fim;
	double tempo_gasto;
	ulint soma = 0;

	// Variaveis para entrada
	int entrada1, entrada2;
	scanf("%d %d", &entrada1, &entrada2);

	tempo_init = clock();
	for ( int i = 0; i < BIGNUM; i++ ) {
		soma = f1(entrada1, entrada2);
	}
	tempo_fim = clock();
	tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
	//printf("Tempo gasto na versao normal: %lf\n", tempo_gasto);

	tempo_init = clock();
	for ( int i = 0; i < BIGNUM; i++ ) {
		soma = f2(entrada1, entrada2);
	}
	tempo_fim = clock();
	tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
	//printf("Tempo gasto na versao bitwise: %lf\n", tempo_gasto);

	// Resposta
	if (soma == 0) {
		printf("maior=%d menor=%d\n", entrada2, entrada1);
	} else {
		printf("maior=%d menor=%d\n", entrada1, entrada2);
	}

	return 0;
}
