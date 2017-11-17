#include <stdio.h>
#include <time.h>
#include <limits.h>
#include <math.h>

#define BIGNUM ULONG_MAX
//#define BIGNUM INT_MAX
//#define BIGNUM 10000

typedef unsigned long int ulint;

ulint f1 ( ulint x )
{
	float lg; 
	lg = log2(17);

	int lg_int; 
	lg_int = (int)lg;

	if (lg - lg_int == 0) return 1;

	return 0;
}

ulint f2 ( ulint x )
{
	return (x != 0) && ((x & (x - 1)) == 0);
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
		soma += f1(entrada);
	}
	tempo_fim = clock();
	tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
	printf("Tempo gasto na versao normal: %lf\n", tempo_gasto);

	tempo_init = clock();
	for ( int i = 0; i < BIGNUM; i++ ) {
		soma += f2(entrada);
	}
	tempo_fim = clock();
	tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
	printf("Tempo gasto na versao bitwise: %lf\n", tempo_gasto);

	// Resposta
	printf("%s\n", (soma) ? "sim":"nao");

	return 0;
}
