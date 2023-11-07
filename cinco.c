#include <stdio.h>
#include <stdlib.h>

/*
Enquanto você faz parte de uma equipe de desenvolvimento de software, 
desenvolva um programa que solicite ao usuário que escolha um idioma de preferência  (1 - Inglês, 2 - Espanhol, 3 - Francês). 
Com base na escolha do usuário, exiba a mensagem de boas-vindas no idioma selecionado.
*/

int main() {
    int idioma = 0;

    printf("1 - Ingles\n2 - Espanhol\n3 - Frances");

    do {
        printf("\n\nSelecione o codigo do seu idioma: ");
        scanf("%d",&idioma);

        if (idioma > 3) printf("\nNao temos esse codigo de idioma, digite outro");

    }while (idioma > 3);

    switch (idioma) {
        case 1:
            printf("\nWelcome");
            break;
        case 2:
            printf("\nBienvenida");
            break;
        case 3:
            printf("\nAccueillir");
            break;
    }

    return 0;
}