#include <stdio.h>
#include <string.h>

void le_matriz( int[3][3] );
void transposta( int[3][3] );
void imprime_matriz( int[3][3] );


int main() {
    int matriz[3][3];
    le_matriz(matriz);
    transposta(matriz);
    imprime_matriz(matriz);
    return 0;
}

/* Recebe os valores da matriz 3x3 */
void le_matriz( int output[3][3] )
{
    for( int i = 0; i < 3; i++ ) {
        for ( int j = 0; j < 3; j++ ) {
            scanf("%d", &output[i][j]);
        }
    }
}

/* Faz a transposta da matriz de entrada */
void transposta( int matriz[3][3] )
{
    int input[3][3];
    memcpy(input, matriz, 3*3*sizeof(int));
    for( int i = 0; i < 3; i++ ) {
        for ( int j = 0; j < 3; j++ ) {
            matriz[i][j] = input[j][i];
        }
    }
}

/* Imprime a matriz */
void imprime_matriz( int matriz[3][3] )
{
    for( int i = 0; i < 3; i++ ) {
        for ( int j = 0; j < 3; j++ ) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}
