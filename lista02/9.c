#include <stdio.h>

int potencia( int, int );


/* Função main */
int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d\n", potencia(x, y));
    return 0;
}

/* Calcula a potencia de x^y */
int potencia( int x, int y )
{
    if(y == 1) return x;
    return x * potencia(x, y-1);
}
