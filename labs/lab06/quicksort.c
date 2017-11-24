#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <limits.h>

#define ARRAYSIZE 999
//#define BIGNUM INT_MAX
#define BIGNUM 1000
#define HIGH 2


void swap(int *v, int i, int j)
{
    int mem = v[i];
    v[i] = v[j];
    v[j] = mem;
}

int partition(int *v, int low, int high)
{
    int pivot = v[high];
    int j, i = low;
    for (j=low; j<high; j++) {
        if (v[j] <= pivot) {
            swap(v, i, j);
            i++;
        }
    }
    swap(v, i, high);
    return i;
}

void quicksort(int *v, int low, int high)
{
    int p;
    if (low < high) {
        p = partition(v, low, high);
        quicksort(v, low, p-1);
        quicksort(v, p+1, high);
    }
}

void rand_int_vec(int v[ARRAYSIZE])
{
    srand((unsigned) time(NULL));
    for (int i=0; i < ARRAYSIZE; i++) {
        int num = rand() % 1000 + 1;
        v[i] = num;
    }
}

void seq_int_vec(int v[ARRAYSIZE])
{
    for (int i=0; i < ARRAYSIZE; i++) {
        v[i] = i;
    }
}

void invseq_int_vec(int v[ARRAYSIZE])
{
    for (int i=1; i < ARRAYSIZE; i++) {
        v[i] = ARRAYSIZE-i;
    }
}

void print_array(int v[ARRAYSIZE])
{
    for(int i=0; i < ARRAYSIZE; i++) {
        printf("%d%c ", v[i], (i+1==ARRAYSIZE)?'\n':',');
    }
}


int main(int argc, char *argv[]) {

    int v[ARRAYSIZE];

    int opcao = atoi(argv[1]);
    char *debug = argv[2];

    clock_t tempo_init, tempo_fim;
    double tempo_gasto;

    tempo_init = clock();
    for(int i=0; i<BIGNUM; i++) {
        switch (opcao) {
            case 1:
                // vetor de tamanho 1000 com valores aleatório.
                //printf("Exercício 1:\n");
                rand_int_vec(v);
                quicksort(v, 0, HIGH);
                break;
            case 2:
                // vetor de tamanho 1000 com valores sequenciais de 1 a 1000
                //printf("Exercício 2:\n");
                seq_int_vec(v);
                quicksort(v, 0, HIGH);
                break;
            case 3:
                //vetor de tamanho 1000 com valores sequenciais de 1000 a 1
                //printf("Exercício 3:\n");
                invseq_int_vec(v);
                quicksort(v, 0, HIGH);
                break;
            default:
                printf("Nenhuma opção selecionada!");
        }
    }
    tempo_fim = clock();
    tempo_gasto = (double)(tempo_fim - tempo_init)/CLOCKS_PER_SEC;
    printf("Tempo total gasto: %lf\n", tempo_gasto);

    if (debug)
        print_array(v);

    return 0;
}
