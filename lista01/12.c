#include <stdio.h>
#include <math.h>


int decimalParaHexadecimal(int valor);
int hexadecimalParaDecimal(int valor);


/* Recebe um valor e uma opção e converte de decimal para hexadecimal (opção 1) ou o contrário (opção 2) */
int main() {
    int valor, opcao;
    scanf("%d", &valor);
    scanf("%d", &opcao);

    if ( opcao == 1 ) {
        valor = decimalParaHexadecimal(valor);
    } else {
        valor = hexadecimalParaDecimal(valor);
    }

    printf("%d\n", valor);

    return 0;
}

/* Função de conversão de decimal para hexadecimal */
int decimalParaHexadecimal(int v) {
    int memoria;
    int hexadecimal = 0, i = 1;

    while ( v != 0 ) {
        memoria = v % 2;
        v = v / 2;
        hexadecimal = hexadecimal + ( memoria * i );
        i = i * 10;
    }
    return hexadecimal;
}

/* Função de conversão de hexadecimal para decimal */
int hexadecimalParaDecimal(int v) {
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
