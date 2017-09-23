#include <stdio.h>


int main() {

    int entrada, i;

    scanf("%d", &entrada);

    if ( entrada - 100 >= 0 ) {
        for ( i = 100; i <= entrada; i++ ) {
            if ( i % 2 == 0 ) {
                printf("%d", i);
                if ( i < entrada ) {
                    printf(", ");
                } else {
                    printf("\n");
                }
            }
        }
    }

    return 0;
}
