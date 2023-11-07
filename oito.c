#include <stdio.h>
#include <stdlib.h>

/*
Desenvolva um programa que solicite ao usuário um número inteiro positivo
e faça uma contagem regressiva a partir desse número até zero. 
*/

int main() {
    int count = 0;

    printf("Digite um valor cima de zero: ");
    scanf("%d",&count);

    for (count = count; count >= 0; count--) {
        printf("Regressiva: %d\n", count);
    }
    return 0;
}