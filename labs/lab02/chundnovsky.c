#include <stdio.h>
#include <math.h>

double factorial( double value );
double sum_terms( double x, double y );
double power_term( double x, double p);
double sum_chundnovskys_series( int n );
double chundnovsky( int n );


/* Return the Chundnovsky's aproximation of pi */
int main() {

    int n_terms;
    double result;
    scanf("%d", &n_terms);

    result = chundnovsky(n_terms);

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

/* Return the Chundnovsky's sum term on numerator */
double sum_terms( double x, double y )
{
    return x + y;
}

/* Return the Chundnovsky''s denominator power term */
double power_term( double x, double p)
{
    return pow( x, p );
}

/* Return the sum of series from Chundnovsky's aproximation */
double sum_chundnovskys_series( int n )
{
    int i;
    double result;
    result = 0;
    for ( i = 0; i < n; i++ ) {
        result += (power_term(1,i) * factorial(6*i) * sum_terms(13591409, 545140134*i)) /\
                  (factorial(3*i) * power_term(factorial(i), 3) *  power_term(640320, 3*i+(double)3/2));
    }
    return result;
}

double chundnovsky( int n )
{
    double pi;
    pi = 12 * sum_chundnovskys_series(n);
    return 1/pi;
}
