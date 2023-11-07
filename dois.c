#include <stdio.h>
#include <stdlib.h>

/*
Você é um desenvolvedor de e-commerce e está trabalhando em um novo sistema de descontos. 
O sistema oferece um desconto de 10% para compras acima de R$ 100,00 se a compra for feita em um dia de semana. 
Se a compra for feita em um fim de semana, o desconto será de 15% sobre o valor da compra acima de R$ 100,00.
*/

int main() {
    int dia = 7;
    float desconto = 0, valor = 110;

    if (valor > 100) {
        switch (dia) {
            case 0:
            case 7:
                desconto = valor - 0.15;
                break;
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
                desconto = valor - 0.10;
                break;
        }
    }

    printf("Valor: %.1f\n",valor);
    printf("Desconto: %.1f\n",desconto);

    return 0;
}