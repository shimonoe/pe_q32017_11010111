#include <stdio.h>

// Struct para o cronômetro
typedef struct Cronometro
{
	int m;
	int s;
	int d;
} Cronometro;

// Função para converter o valor de entrada do cronômetro para decimos
float converte_para_segundos ( Cronometro t )
{
	float segundos = 0.00;

	segundos += t.m*60;
	segundos += t.s;
	segundos += t.d/100.00;

	return segundos;
}

// Função para converter o valor em decimos para o tipo cronômetro
Cronometro segundos_para_cronometro( float segundos )
{
	Cronometro c;

	int seg_int = (int)segundos;

	c.d = (segundos - seg_int)*100;
	c.s = seg_int % 60;
	seg_int /= 60;
	c.m = seg_int;

	return c;
}

// Função que caucula a diferença entre dois tempos definidos pela struct Cronometro
Cronometro diferenca ( Cronometro t1, Cronometro t2 )
{
	Cronometro diff;
    // Tempo convertido em segundos para facilitar o calculo
	float t1s, t2s, delta;
	int neg;

	t1s = converte_para_segundos(t1);
	t2s = converte_para_segundos(t2);

	if ( t2s >= t1s ) neg = 1;
	delta = t1s - t2s;

	diff = segundos_para_cronometro(delta);
	if ( neg ) diff.m *= -1;
	
	return diff;
}

int main () {
	
	Cronometro t1, t2, delta;

	scanf("%dm %ds %d", &(t1.m), &(t1.s), &(t1.d));
	scanf("%dm %ds %d", &(t2.m), &(t2.s), &(t2.d));

	delta = diferenca(t1, t2);

	printf("%dm %ds %d\n", delta.m, delta.s, delta.d);
	
	return 0;
}
