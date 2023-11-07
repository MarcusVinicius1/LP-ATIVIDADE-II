#include <stdio.h>
#include <stdlib.h>

/*
Implemente um programa que solicite do usuário números inteiros e verifique quantos números são pares e quantos são ímpares. 
Além disto, deve ser exibido a média aritmética de números pares e impares. 
Deve-se interromper a leitura dos dados quando for digitado um valor negativo.

Deve-se interromper a leitura dos dados quando for digitado um valor negativo.
*/

int main() {
    int numero = 0, qtdPar = 0, qtdImpar = 0;
    float soma = 0, media = 0;

    do {
        printf("Digite o valor: ");
        scanf("%d",&numero);

        if (numero > 0) {
            numero % 2 == 0 ? qtdPar++ : qtdImpar++;
            soma += numero;
            media = soma / soma;
        }

    }while (numero > 0);

    printf("Quantidade de par: %d\n",qtdPar);
    printf("Qauntidade de impar: %d\n",qtdImpar);
    printf("Media: %.1f\n",media);

    return 0;
}