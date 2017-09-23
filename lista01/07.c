#include <stdio.h>
#include <math.h>


/* Calcula x^y de dois inteiros */
int main() {
    int x, y, resultado;
    scanf("%d", &x);
    scanf("%d", &y);

    resultado = pow(x, y);

    printf("%d\n", resultado);

    return 0;
}
