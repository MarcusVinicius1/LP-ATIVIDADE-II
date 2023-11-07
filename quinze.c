#include <stdio.h>
#include <stdlib.h>

/*
Implemente um programa que converta valores entre diferentes unidades de medida, 
como por exemplo, quilômetros para milhas e Celsius para Fahrenheit. 
O programa deve permitir ao usuário escolher a conversão desejada e repetir o processo para vários valores. 
Utilize o switch case e continue mostrando as opções para conversão até o usuário digite 0 para sair do programa.
*/

int main() {
    float ValorMilhas = 0, ValorFahrenheit = 0, calc = 0;
    int numero = 0;

    printf("0 - Sair\n1 - Quilometros para milhas\n2 - Celsius para Fahrenheit");

    printf("\n\nEscolha um dessa opcoes de conversao, digite o codigo delas: ");
    scanf("%d",&numero);

    switch (numero) {
        case 0:
            printf("Saindo...");
        case 1:
            printf("Digite um valor: ");
            scanf("%f",ValorMilhas);

            calc =  ValorMilhas * 1.609;

            printf("%f Milhas", calc);
            break;
        case 2:
            printf("Digite um valor: ");
            scanf("%f",ValorFahrenheit);

            calc = (ValorFahrenheit * 1.8) + 32;

            printf("%f Fahrenheit", calc);
            break;
    }

    return 0;
}