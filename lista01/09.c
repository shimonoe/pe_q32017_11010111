#include <stdio.h>

double celciusParaFahrenheit(double celcius);
double fahrenheitParaCelcius(double fahrenheit);

/* Faz a conversão de uma temperatura para Celcius ou Fahrenheit dependendo da opção */
int main() {
    double temperatura, convertido;
    int opcao;

    scanf("%lf", &temperatura);
    scanf("%d", &opcao);

    if ( opcao == 1 ) {
        convertido = celciusParaFahrenheit(temperatura);
    } else {
        convertido = fahrenheitParaCelcius(temperatura);
    }

    printf("%.2lf\n", convertido);

    return 0;
}

double celciusParaFahrenheit(double celcius) {
    double fahrenheit;
    fahrenheit =  celcius * 1.80 + 32.00;
    return fahrenheit;
}

double fahrenheitParaCelcius(double fahrenheit) {
    double celcius;
    celcius = fahrenheit - 32.00;
    celcius /= 1.80;
    return celcius;
}
