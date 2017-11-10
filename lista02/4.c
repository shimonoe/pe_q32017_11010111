#include <stdio.h>
#include <math.h>

float soma( float, float );
float subtracao( float, float );
float multiplicacao( float, float );
float divisao( float, float );
float potencia( float, float );
float calculadora( int, float, float );

/* Função main */
int main() {
    int opcao;
    float a, b;
    scanf("%d %f %f", &opcao, &a, &b);
    printf("%.2f\n", calculadora(opcao, a , b));
    return 0;
}

/* Função soma */
float soma( float a, float b )
{
    return a + b;
}

/* Função subtração */
float subtracao( float a, float b )
{
    return a - b;
}

/* Função multiplicação */
float multiplicacao( float a, float b )
{
    return a * b;
}

/* Função divisão */
float divisao( float a, float b )
{
    return a / b;
}

/* Função potenciação */
float potencia( float a, float b )
{
    return pow(a, b);
}

/* Função calculadora */
float calculadora( int opcao, float a, float b ) 
{
    float resultado;
    switch(opcao){
        case 1:
            resultado = soma(a, b);
            break;
        case 2:
            resultado = subtracao(a, b);
            break;
        case 3:
            resultado = multiplicacao(a, b);
            break;
        case 4:
            resultado = divisao(a, b);
            break;
        case 5:
            resultado = potencia(a, b);
            break;
        default:
            break;
    }
    return resultado;
}
