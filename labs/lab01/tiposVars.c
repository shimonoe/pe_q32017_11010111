/* tiposVars.c
 * Ilustração da diferença entre
 * os tipos de variáveis.
 *
 * Autor: Fabrício Olivetti de França
 * Data: 15/08/2016
 */

#include <stdio.h>

int main( )
{
    int inteiro, bytes;
    float simples_precisao;
    double dupla_precisao;
    char caracter;
    int vetor[100];

    printf("Digite o tamanho de um inteiro em bytes: ");
    scanf("%d", &bytes);
    printf("Resposta correta: %d\n", sizeof(int));

    printf("Digite o tamanho de um short int em bytes: ");
    scanf("%d", &bytes);
    printf("Resposta correta: %d\n", sizeof(short int));

    printf("Digite o tamanho de um long int em bytes: ");
    scanf("%d", &bytes);
    printf("Resposta correta: %d\n", sizeof(long int));

    printf("Digite o tamanho de um char em bytes: ");
    scanf("%d", &bytes);
    printf("Resposta correta: %d\n", sizeof(char));

    printf("Digite o tamanho de um unsigned char em bytes: ");
    scanf("%d", &bytes);
    printf("Resposta correta: %d\n", sizeof(unsigned char));

    printf("Digite o tamanho de um float em bytes: ");
    scanf("%d", &bytes);
    printf("Resposta correta: %d\n", sizeof(float));

    printf("Digite o tamanho de um double em bytes: ");
    scanf("%d", &bytes);
    printf("Resposta correta: %d\n", sizeof(double));

    printf("Digite o tamanho de um long double em bytes: ");
    scanf("%d", &bytes);
    printf("Resposta correta: %d\n", sizeof(long double));

    printf("Digite o tamanho de um vetor de int com 100 elementos, em bytes: ");
    scanf("%d", &bytes);
    printf("Resposta correta: %d\n", sizeof(vetor));

    printf("O que está contido na variável inteiro? ");
    scanf("%d", &bytes);
    printf("Resposta correta: %d\n", inteiro);

    printf("Qual o conteúdo do primeiro elemento do vetor? ");
    scanf("%d", &bytes);
    printf("Resposta correta: %d\n", vetor[0]);

    caracter = 'A';
    printf("Qual o valor do caractere 'A' na tabela ASCII? ");
    scanf("%d", &bytes);
    printf("%d\n", caracter);

    printf("Qual o 70o. símbolo da tabela ASCII? ");
    scanf(" %c", &caracter);
    printf("%c\n", 70);

    printf("Um caractere consegue armazenar números de -127 a 128.\n");
    printf("O que acontece se colocarmos um número maior?\n");
    printf("Ao fazer caracter = 129, que número ele irá mostrar? ");
    scanf("%d", &bytes);

    caracter = 129;
    printf("%d\n", caracter);
    return 0;
}
