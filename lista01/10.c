#include <stdio.h>

double celciusParaKelvin(double celcius);
double kelvinParaCelcius(double kelvin);

/* Faz a conversão de uma temperatura para Celcius ou Kelvin dependendo da opção */
int main() {
    double temperatura, convertido;
    int opcao;

    scanf("%lf", &temperatura);
    scanf("%d", &opcao);

    if ( opcao == 1 ) {
        convertido = celciusParaKelvin(temperatura);
    } else {
        convertido = kelvinParaCelcius(temperatura);
    }

    printf("%.2lf\n", convertido);

    return 0;
}

double celciusParaKelvin(double celcius) {
    double kelvin;
    kelvin =  celcius +  273.15;
    return kelvin;
}

double kelvinParaCelcius(double kelvin) {
    double celcius;
    celcius = kelvin - 273.15;
    return celcius;
}
