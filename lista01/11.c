#include <stdio.h>
#include <math.h>


int decimalParaBinario(int valor);
int binarioParaDecimal(int valor);


/* Recebe um valor e uma opção e converte de decimal para binário (opção 1) ou o contrário (opção 2) */
int main() {
    int valor, opcao;
    scanf("%d", &valor);
    scanf("%d", &opcao);

    if ( opcao == 1 ) {
        valor = decimalParaBinario(valor);
    } else {
        valor = binarioParaDecimal(valor);
    }

    printf("%d\n", valor);

    return 0;
}

/* Função de conversão de decimal para binário */
int decimalParaBinario(int v) {
    int memoria;
    int binario = 0, i = 1;

    while ( v != 0 ) {
        memoria = v % 2;
        v = v / 2;
        binario = binario + ( memoria * i );
        i = i * 10;
    }
    return binario;
}

/* Função de conversão de binário para decimal */
int binarioParaDecimal(int v) {
    int memoria;
    int decimal = 0, i = 0;
    while ( v != 0 ) {
        memoria = v % 10;
        v = v / 10;
        decimal = decimal + ( memoria * pow(2, i) );
        ++i;
    }
    return decimal;
}
