#include <stdio.h>

/* Funções */
float calculaDescontos(int id, int faltas);
float calculaAcrescimos(int id, int horas_extra);
void imprimeRelatorio(int id, int faltas, int horas_extra, float descontos, float acrescimos, float salario);

/* Constantes */
float SALARIOS[5] = {10000, 8000, 5000, 3000, 2000};

/* Calcula o salário baseado no cargo, número de faltas e quantidade de horas-extra do funcionário */
int main() {

    int id, faltas, horas_extra;
    float descontos, acrescimos, salario;

    scanf("%d", &id);
    scanf("%d", &faltas);
    scanf("%d", &horas_extra);

    descontos = calculaDescontos(id, faltas);
    acrescimos = calculaAcrescimos(id, horas_extra);
    salario = SALARIOS[id - 1] - descontos + acrescimos;
    imprimeRelatorio(id, faltas, horas_extra, descontos, acrescimos, salario);

    return 0;
}

/* Calcula os descontos baseado no id do cargo e do número de faltas */
float calculaDescontos(int id, int faltas) {
    return (SALARIOS[id - 1] / 20) * faltas;
}

/* Calcula os acrescimos baseado no id do cargo e na quantidade de horas extra */
float calculaAcrescimos(int id, int horas_extra) {
    if ( horas_extra <= 40 ) {
        return (((SALARIOS[id - 1] / 20) / 8) + 40) * horas_extra;
    } else {
        return (((SALARIOS[id - 1] / 20) / 8) + 40) * 40;
    }
}

/* Imprime o relatório no formato correto */
void imprimeRelatorio(int id, int faltas, int horas_extra, float descontos, float acrescimos, float salario) {
    switch ( id ) {
        case 1:
            printf("cargo\t\t: Diretor\n");
            break;
        case 2:
            printf("cargo\t\t: Gerente\n");
            break;
        case 3:
            printf("cargo\t\t: Engenheiro\n");
            break;
        case 4:
            printf("cargo\t\t: Técnico\n");
            break;
        case 5:
            printf("cargo\t\t: Operador\n");
            break;
        default:
            printf("cargo\t\t: Id não reconhecido\n");
            break;
    }
    printf("# de faltas\t: %d\n", faltas);
    printf("# horas-extra\t: %d\n", horas_extra);
    printf("descontos\t: %.2f\n", descontos);
    printf("acrescimos\t: %.2f\n", acrescimos);
    printf("salario\t\t: %.2f\n", salario);
}
