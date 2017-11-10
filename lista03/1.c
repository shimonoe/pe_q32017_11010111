#include <stdio.h>

int conta_vogais( char * );

int main() {
    char str[255];
    fgets(str, 255, stdin);
    printf("%d\n", conta_vogais(str));
    return 0;
}

int conta_vogais( char *str )
{
    char vogais[5] = {'a', 'e', 'i', 'o', 'u'};
    int quantidade = 0;
    int i = 0;
    while ( str[i] != '\0' ) {
        for ( int j = 0; j < sizeof(vogais); j++ ) {
            if ( str[i] == vogais[j] ) quantidade++;
        }
        i++;
    }
    return quantidade;
}
