#include <stdlib.h>
#include <stdio.h>

/*
Crie um programa que solicite do usuário dois números inteiros e informe qual destes números é o maior e qual é o menor.
*/

int main() {
    int numeroUm = 0, numeroDois = 0;

    printf("Digite o primeiro numero: ");
    scanf("%d",&numeroUm);

    printf("Digite o segundo numero: ");
    scanf("%d",&numeroDois);

    if (numeroUm > numeroDois) printf("\n%d Maior\n%d Menor",numeroUm,numeroDois);
    else if (numeroDois > numeroUm) printf("\n%d Maior\n%d Menor",numeroDois,numeroUm);
    else printf("\nAmbos sao iguais");

    return 0;
}