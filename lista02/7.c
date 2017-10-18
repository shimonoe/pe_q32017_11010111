#include <stdio.h>

/* Menu principal */
void menu ( float, float, float, float );
/* Opção 1: Conversão de temperaturas */
void fahrenheit ( float, float ); 
void celcius ( float, float ); 
void kelvin ( float, float );
/* Opção 2: Conversão de binários */
void binario ( int );
void decimal ( int );


/* Função main */
int main () {
    float conversor, entrada, saida, valor;
    scanf("%f %f %f %f", &conversor, &entrada, &saida, &valor);
    menu(conversor, entrada, saida, valor);
    return 0;
}

/* Menu de entrada: Direciona as opções para a função adequada */
void menu ( float conversor, float entrada, float saida, float valor )
{
    if ( conversor == 1 ) {
        switch ( (int) saida ) {
            case 1:
                celcius(entrada, valor);
                break;
            case 2:
                fahrenheit(entrada, valor);
                break;
            case 3:
                kelvin(entrada, valor);
                break;
        }
    } else if ( conversor == 2 ) {
        switch ( (int) saida ) {
            case 1:
                decimal(valor);
                break;
            case 2:
                binario(valor);
                break;
        }
    }
}

/* Converte de Fahrenheit ou Kelvin para Celcius */
void celcius ( float entrada, float valor )
{
    float convertido;
    switch ( (int) entrada ) {
        case 1:
            convertido = valor;
            break;
        case 2:
            convertido = (valor - 32.00) / 1.8000;
            break;
        case 3:
            convertido = valor - 273.15;
            break;
    }
    printf("%.2f C\n", convertido);
}


/* Converte de Celcius ou Kelvin para Fahrenheit */
void fahrenheit ( float entrada, float valor ) 
{
    float convertido;
    switch ( (int) entrada ) {
        // Entrada: Celcius
        case 1:
            convertido = valor * 1.8000 + 32.00;
            break;
        // Entrada: Fahrenheit
        case 2:
            convertido = valor;
            break;
        // Entrada: Kelvin
        case 3:
            convertido = valor * 9/5;
            break;
    }
    printf("%.2f F\n", convertido);
}

/* Converte de Celcius ou Fahrenheit para Kelvin */
void kelvin ( float entrada, float valor ) 
{
    float convertido;
    switch ( (int) entrada ) {
        // Entrada: Celcius
        case 1:
            convertido = valor + 273.15;
            break;
        // Entrada: Fahrenheit
        case 2:
            convertido = (valor + 459.57) * 5/9;
            break;
        // Entrada: Kelvin
        case 3:
            convertido = valor;
            break;
    }
    printf("%.2f K\n", convertido);
}

/* Função de conversão de binário para decimal */                          
void decimal ( int v ) 
{      
    int memoria;                     
    int decimal = 0, i = 0;          
    while ( v != 0 ) {               
        memoria = v % 10;            
        v = v / 10;                  
        decimal = decimal + ( memoria * i * i );                       
        ++i;                         
    }                                
    printf("%d\n", decimal);
}


/* Função de conversão de decimal para binário */
void binario ( int v )
{
    int memoria;
    int binario = 0, i = 1;

    while ( v != 0 ) {
        memoria = v % 2;
        v = v / 2;
        binario = binario + ( memoria * i );
        i = i * 10;
    }
    printf("%d\n", binario);
}
