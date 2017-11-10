#include <stdio.h>
#include <math.h>
#include <complex.h>

double bhaskara_delta( double, double, double );
double * bhaskara( double, double, double );
double * bhaskara_real( double, double, double );
double * bhaskara_complexo( double, double, double );
void print_bhaskara( double * );

/* Função main */
int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    print_bhaskara(bhaskara(a, b, c));
    return 0;
}


/* Calcula o delta da função de Bhaskara */
double bhaskara_delta( double a, double b, double c )
{
    double delta;
    delta = pow(b, 2);
    delta -= 4*a*c;
    return delta;
}

/* Raízes reais de Bhaskara */
double * bhaskara( double a, double b, double c )
{
    static double *raizes;
    int i;

    double delta = bhaskara_delta(a, b, c);
    double raiz;

    if( delta > 0 ) {
        raizes = bhaskara_real(delta, a, b);
    } else {
        raizes = bhaskara_complexo(delta, a, b);
    }
    return raizes;
}

/* Calculo das raizes para delta positivo */
double * bhaskara_real( double delta , double a, double b )
{
    static double raizes[3];
    double raiz;
    int i;
    raizes[0] = 1;

    for( i = 1; i < 3; i++ ) {
        if( i % 2 == 0 ){
            raiz = sqrt(delta);
        } else {
            raiz = (-1) * sqrt(delta);
        }
        raizes[i]  = (-1) * b;
        raizes[i] += raiz;
        raizes[i] /= 2 * a;
    }
    return raizes;
}

/* Calculo das raizes para delta negativo */
double * bhaskara_complexo( double delta, double a, double b )
{
    static double raizes[3];
    double complex raiz_i;
    double real;

    raizes[0] = 0;

    real = -b/2*a;

    raiz_i = csqrt((complex)delta);
    raiz_i = cimag(raiz_i);
    raiz_i /= 2;

    raizes[1] = real;
    raizes[2] = raiz_i;

    return raizes;
}


/* Print Bhaskara */
void print_bhaskara( double *raizes )
{
    if(raizes[0]) {
        printf("%.2lf ", raizes[1]);
        printf("%.2lf\n", raizes[2]);
    } else {
        printf("%.2lf -%.2lfi ", raizes[1], raizes[2]);
        printf("%.2lf +%.2lfi\n", raizes[1], raizes[2]);
    }
}
