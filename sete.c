#include <stdio.h>
#include <stdlib.h>

/*
Em um projeto para um jogo, é necessário cria um menu, 
crie um programa que exiba um menu com opções (1 - Novo jogo, 2 - Carregar jogo, 3 - Configurações). 
Solicite ao usuário que escolha uma opção e, utilizando o switch case, 
execute a funcionalidade correspondente à opção escolhida.
*/

int main() {
    int codigo = 0, idade = 0;
    char nome[200];

    printf("1 - Novo jogo\n2 - Carregar jogo\n3 - Configuracao");

    do {
        printf("\n\nNavegue pelo codigo: ");
        scanf("%d",&codigo);

        if (codigo > 3) printf("\nNao tempos essa opcao de navegacao, Digite novamente de acordo com o menu");

    }while (codigo > 3);

    switch (codigo) {
        case 1:
            printf("\n\nDigite sua idade: ");
            scanf("%d",&idade);

            if (idade < 18) printf("\nVoce nao pode jogar esse jogo");
            else {
                printf("Digite seu nome: ");
                scanf("%s",&nome);
            }
            break;
        case 2:
            if (idade == 0) printf("\nNao exite nenhum jogo salvo");
            break;
        case 3:
            printf("Som\nGrafico\nControles");
            break;
    }

    return 0;
}