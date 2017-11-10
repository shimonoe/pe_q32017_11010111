#include <stdio.h>
#include <math.h>

long double gl_pi ( int );


/* Função main */
int main () {
    int repeticoes;
    scanf("%d", &repeticoes);
    printf("%.20Lf\n", gl_pi(repeticoes));
    return 0;
}

/* Aproximação de Gauss-Legendre para o pi */
long double gl_pi ( int n )
{
    long double an, a, b, t, p, pi;
    an = 0.0;
    a = 1.0;
    b = 1.0/sqrt(2.0);
    t = 1.0/4.0;
    p = 1.0;

    while( n-- ) {
        an = (a+b)/2;
        b = sqrt(a*b);
        t = t - p*pow((a-an),2);
        p = 2*p;
        a = an;
    }
    pi = pow((a+b),2.0)/(4.0*t);
    return pi;
}
