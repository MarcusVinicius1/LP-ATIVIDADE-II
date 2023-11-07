#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Você é um desenvolvedor de jogos e está trabalhando em um novo jogo de aventura. 
O jogo tem um sistema de clima que depende da temperatura externa.
Se a temperatura for superior a 25 graus Celsius, o clima será ensolarado. 
Se a temperatura for inferior a 15 graus Celsius, o clima será chuvoso. 
Se a temperatura estiver entre 15 e 25 graus Celsius, o clima será nublado.
*/

int main() {
    int temperatura = 0;
    char clima[100];

    printf("Informe a temperatura em Celsius: ");
    scanf("%s",&temperatura);

    if (temperatura > 25) strcpy(clima, "clima ensolarado");
    else if (temperatura < 15) strcpy(clima, "clima chuvoso");
    else if (temperatura > 14 || temperatura < 26) strcpy(clima, "clima nublado");
    else strcpy(clima, "Erro ao definir o clima");

    printf("\n%s\n",clima);

    return 0;
}