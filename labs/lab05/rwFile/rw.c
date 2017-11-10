#include <stdio.h>
#include <stdlib.h>

#include "rw.h"

#pragma pack(1)

#define ARRAY_SIZE 10

int main () {

    FILE * bin;

    printf("----------------\n Escrevendo array:\n");
    
    /* Escreve a array em um arquivo binário */
    Teste arr[ARRAY_SIZE];

    int i;
    for (i=0; i < ARRAY_SIZE; i++) {
        Teste strct;
        strct.x = i;
        strct.y = i*2;
        printf("\tx:%d, y:%d\n", strct.x, strct.y);
        arr[i] = strct;
    }

    bin = fopen("teste.bin", "wb");
    fwrite(arr, sizeof(arr), 1, bin);
    fclose(bin);


    printf("----------------\n Lendo array:\n");
    /* Lê a array de um arquivo binário */
    Teste arr2[ARRAY_SIZE];

    bin = fopen("teste.bin", "rb");
    fread(arr2, sizeof(Teste), ARRAY_SIZE, bin);

    for(i=0; i < ARRAY_SIZE; i++) {
        Teste strct = arr2[i];
        printf("\tx:%d y:%d\n", strct.x, strct.y);
    }

    printf("----------------\n");
    return 0;
}

