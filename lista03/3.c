#include <stdio.h>

void le_valores_inteiros( int* );
void soma_vetores_inteiros( int*, int*, int* );
void imprime_vetor( int* );

int main() {
    int a[5], b[5];
    int soma[5];

    le_valores_inteiros(a);
    le_valores_inteiros(b);

    soma_vetores_inteiros(a, b, soma);

    imprime_vetor(soma);

    return 0;
}

/* Lê cinco valores inteiros e armazena em um vetor */
void le_valores_inteiros( int *output )
{
    for ( int i = 0; i < 5; i++ ) scanf("%d", &output[i]);
}

/* Calcula a soma dos valores em cada posição do vetor */
void soma_vetores_inteiros( int *a, int *b, int *output )
{
    for ( int i = 0; i < 5; i++ ) output[i] = a[i] + b[i];
}

/* Imprime vetor */
void imprime_vetor( int *vetor )
{
    for (int i =0; i< 5; i++) printf("%d ", vetor[i]);
    printf("\n");
}
