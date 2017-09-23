#include <stdio.h>
#include <math.h>

/* Funções */
int somaDosQuadrados(int x, int y);
int quadradoDaSoma(int x, int y);
void imprimeResposta(int sdq, int qds, int dif);


/* Calcula a diferença entre a soma dos quadrados e o quadrado da soma */
int main() {
    int x, y, soma_dos_quadrados, quadrado_da_soma, diferenca;

    scanf("%d", &x);
    scanf("%d", &y);

    soma_dos_quadrados = somaDosQuadrados(x, y);
    quadrado_da_soma = quadradoDaSoma(x, y);
    diferenca = quadrado_da_soma - soma_dos_quadrados;
    imprimeResposta(soma_dos_quadrados, quadrado_da_soma, diferenca);

    return 0;
}

/* Recebe o intervalo e faz a soma dos quadrados dos inteiros contidos */
int somaDosQuadrados(int x, int y) {
    int sdq, i;
    sdq = 0;

    for ( i = x; i <= y; i++ ) {
        sdq += pow(i, 2);
    }
    return sdq;
}

/* Recebe o intervalo e faz o quadrado da soma dos inteiros contidos */
int quadradoDaSoma(int x, int y) {
    int qds, i;
    qds = 0;

    for ( i = x; i <= y; i++ ) {
        qds += i;
    }
    qds = pow(qds, 2);
    return qds;
}

/* Imprime as entradas no formato especificado */
void imprimeResposta(int sdq, int qds, int dif) {
    printf("soma dos quadrados\t= %d\n", sdq);
    printf("quadrado da soma\t= %d\n", qds);
    printf("diferenca\t\t= %d\n", dif);
}
