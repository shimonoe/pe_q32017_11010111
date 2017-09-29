#include <stdio.h>
#include <math.h>

double factorial( double value );
double sum_terms( double x, double y );
double power_term( double x, double p);
double sum_ramanujans_series( int n );
double ramanujan( int n );


/* Return the Ramanujan's aproximation of pi */
int main() {

    int n_terms;
    double result;
    scanf("%d", &n_terms);

    result = ramanujan(n_terms);

    printf("%.64lf\n", result);

    return 0;
}


/* Return a factorial of an given value */
double factorial( double value )
{
    int i;
    double result;
    if ( value == 0 || value == 1 ) {
        result = 1;
    } else {
        for ( i = value; i > 0; i-- ) {
            if ( i == value ) {
                result = value;
            } else {
                result *= i;
            }
        }
    }    
    return result;
}

/* Return the Ramanujan's sum term on numerator */
double sum_terms( double x, double y )
{
    return x + y;
}

/* Return the Ramanujan's denominator power term */
double power_term( double x, double p)
{
    return pow( x, p );
}

/* Return the sum of series from Ramanujan's aproximation */
double sum_ramanujans_series( int n )
{
    int i;
    double result;
    result = 0;
    for ( i = 0; i < n; i++ ) {
        result += (factorial(4*i) * sum_terms(1103, 26390*i)) / (power_term(factorial(i), 4) * power_term(396, 4*i));
    }
    return result;
}

double ramanujan( int n )
{
    double pi;
    pi = ((2 * sqrt(2)) / 9801) * sum_ramanujans_series(n);
    return 1/pi;
}
