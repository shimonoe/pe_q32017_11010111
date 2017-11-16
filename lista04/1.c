#include <stdio.h>
#include <math.h>

// Struct para o ponto
typedef struct Ponto {
	float x;
	float y;
	float z;
} Ponto;


// Calcula distância euclidiana
float distancia ( Ponto a, Ponto b ) {
	float distancia = 0.0;

	distancia  = pow(b.x - a.x, 2.0);
	distancia += pow(b.y - a.y, 2.0);
	distancia += pow(b.z - a.z, 2.0);
	distancia  = sqrt(distancia);

	return distancia;
}


int main () {

	Ponto a, b;
	scanf("%f, %f, %f", &(a.x), &(a.y), &(a.z));
	scanf("%f, %f, %f", &(b.x), &(b.y), &(b.z));

	printf("%.2f\n", floor(distancia(a, b)*100)/100);

	return 0;
}

