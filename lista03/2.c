#include <stdio.h>

void inverte_str( char * );

int main() {
    char str[255];
    fgets(str, 255, stdin);
    inverte_str(str);
    return 0;
}

void inverte_str( char *str ) 
{
    char inverso[255];
    int size = 0;
    while ( str[++size] != '\0' );

    int i = 0;
    while ( size > -1 ) {
        inverso[i] = str[size];
        i++;
        size--;
    }
    i = 1;
    while ( inverso[i] != '\0' ) printf("%c", inverso[++i]); 
    printf("\n");
}
