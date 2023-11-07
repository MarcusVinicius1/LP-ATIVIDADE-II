#include <stdio.h>
#include <stdlib.h>

/*
Crie um programa que solicite ao usuário dois números e uma operação matemática (+, -). 
Utilize o switch case para realizar a operação desejada e exibir o resultado.
*/

int main() {
    char simbolo;
    int numeroUm = 0, numeroDois = 0;

    printf("Digite o primeiro numero: ");
    scanf("%d",&numeroUm);
    
    fflush(stdin);

    printf("Digite o simbolo matematico (+, -): ");
    scanf("%c",&simbolo);

    printf("Digite o segundo numero: ");
    scanf("%d",&numeroDois);

    switch (simbolo) {
        case '+':
            printf("%d + %d = %d", numeroUm, numeroDois, numeroUm + numeroDois);
            break;
        case '-':
            printf("%d - %d = %d", numeroUm, numeroDois, numeroUm - numeroDois);
            break;
    }

    return 0;
}