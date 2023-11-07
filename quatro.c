#include <stdio.h>
#include <stdlib.h>

/*
Em um projeto de controle de acesso, 
crie um programa que solicite ao usuário sua idade e verifique se ele tem permissão para acessar um determinado recurso. 
Se a idade for maior ou igual a 18, exiba a mensagem "Acesso permitido". Caso contrário, exiba a mensagem "Acesso negado".
*/

int main() {
    int idade = 0;

    printf("Digite sua idade: ");
    scanf("%d",&idade);

    idade >= 18 ? printf("\nAcesso permitido") : printf("\nAcesso negado");

    return 0;
}