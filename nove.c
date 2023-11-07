#include <stdio.h>
#include <stdlib.h>

/*
Em um projeto sobre números primos, 
implemente um programa que solicite ao usuário um número inteiro e verifique se ele é um número primo 
utilizando o switch case. Exiba a mensagem "Número primo" caso seja primo, ou "Número não primo" caso contrário.
*/

int main() {
    int numero = 0, i = 0;

    printf("Digite um numero: ");
    scanf("%d",&numero);

    switch (numero) {
        case 1: 
            if (numero <= 1) printf("Nao e primo");

            break;
        
        case 2:
            for (i = 2; i < numero; i++) {
                if (numero % i == 0) printf("Nao e primo");
            }

            if (i == numero) printf("E primo");
            break;
    }

    return 0;
}