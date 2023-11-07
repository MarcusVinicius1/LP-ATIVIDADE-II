#include <stdlib.h>
#include <stdio.h>

/*
Desenvolva um programa que solicite ao usuário uma quantidade de notas e peça para digitar cada nota. 
O programa deve calcular e exibir a média das notas digitadas. Utilize o for para repetir o processo de solicitação das notas.
*/

int main() {
    float nota = 0, media = 0, soma = 0;
    int i = 0, count = 1;

    for (i = 4; i >= 0; i--) {
        printf("Digite %d nota: ", count);
        scanf("%f",&nota);

        count++;

        soma += nota;
    }

    media = soma / 5;

    printf("\nMedia: %.1f",media);

    return 0;
}