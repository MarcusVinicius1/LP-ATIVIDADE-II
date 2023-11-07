#include <stdlib.h>
#include <stdio.h>

/*
Você é um desenvolvedor de um sistema de segurança e precisa criar um algoritmo que, 
dado um código de acesso, permita ao usuário entrar em um edifício. 
O algoritmo deve continuar repetindo até que o usuário digite o código de acesso correto.
*/

int main() {
    int codigo = 0, acesso = 123456;

    do {
        printf("Digite o codigo de acesso: ");
        scanf("%d",&codigo);

        if (codigo != acesso) printf("\nAcesso negado, digite o codigo novamente\n\n");
        else printf("\nAcesso liberado\n");

    }while (codigo != acesso);

    return 0;
}