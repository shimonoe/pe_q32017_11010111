#include <stdio.h>

float volume( float, float, float );

/* Função main */
int main() {
    float x, y, z;
    scanf("%f %f %f", &x, &y, &z);
    printf("%.2f\n", volume(x, y, z));
    return 0;
}

/* Calcula o volume a partir de três medidas */
float volume( float x, float y, float z )
{
   return x * y * z;
}
