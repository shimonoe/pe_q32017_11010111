#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


int rand_int(int n);


int main() {

    printf("%f\n", rand_int(100));

    return 0;
}


int rand_int(int n)
{
    float number;

    srand(time(NULL));
    number = rand() * n;
    number /= RAND_MAX + 1.0;
    number = floor(number);
    return number;

}
