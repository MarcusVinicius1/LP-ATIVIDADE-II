#include <stdio.h>
#include <stdlib.h>

/*
Considerando um projeto de e-commerce, 
implemente um programa que solicite ao usuário o código do produto (1 - Camiseta, 2 - Calça, 3 - Sapato). 
Com base na escolha do usuário, exiba a mensagem informando o produto selecionado e seu preço.
*/

int main() {
    int codigo = 0;
    float preco = 0;

    printf("1 - Camiseta\n2 - Calca\n3 - Sapato");

    do {
        printf("\n\nDigite o codigo do produto: ");
        scanf("%d",&codigo);

        if (codigo > 3) printf("\nNao temos esse codigo de produto, digite o codigo novamente");

    }while (codigo > 3);

    switch (codigo) {
        case 1:
            preco = 14.99;
            break;
        case 2:
            preco = 9.99;
            break;
        case 3:
            preco = 19.99;
    }

    printf("\nProduto: %d\n",codigo);
    printf("Preco: %.1f\n",preco);

    return 0;
}