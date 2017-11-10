#include <stdio.h>

/* Funções */
float calcula_descontos( int, int );
float calcula_acrescimos( int, int );
float calcula_salario( int, float, float );

/* Constantes */
float SALARIOS[5] = {10000, 8000, 5000, 3000, 2000};

/* Calcula o salário baseado no cargo, número de faltas e quantidade de horas-extra do funcionário */
int main() {

    int id, faltas, horas_extra;
    float descontos, acrescimos, salario;

    scanf("%d %d %d", &id, &faltas, &horas_extra);

    descontos = calcula_descontos(id, faltas);
    acrescimos = calcula_acrescimos(id, horas_extra);
    salario = calcula_salario(id, descontos, acrescimos);
    printf("%.2f\n", salario);

    return 0;
}

/* Calcula os descontos baseado no id do cargo e do número de faltas */
float calcula_descontos( int id, int faltas )
{
    return (SALARIOS[id - 1] / 20) * faltas;
}

/* Calcula os acrescimos baseado no id do cargo e na quantidade de horas extra */
float calcula_acrescimos( int id, int horas_extra )
{
    if ( horas_extra <= 40 ) {
        return (((SALARIOS[id - 1] / 20) / 8) + 40) * horas_extra;
    } else {
        return (((SALARIOS[id - 1] / 20) / 8) + 40) * 40;
    }
}

/* Calcula o salário */
float calcula_salario( int id, float descontos, float acrescimos )
{
    return SALARIOS[id - 1] - descontos + acrescimos;
}
