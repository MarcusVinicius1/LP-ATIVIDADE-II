#include <stdio.h>
#include <stdlib.h>

/*
Em um projeto de classificação de alunos, 
desenvolva um programa que receba a nota de um aluno e determine sua classificação com base na seguinte tabela:
   - Nota maior ou igual a 9: "Excelente"
   - Nota entre 7 e 8.9: "Bom"
   - Nota entre 5 e 6.9: "Razoável"
   - Nota menor que 5: "Insuficiente"
*/

int main() {
    float nota = 5;

    if (nota >= 9) printf("Excelente");
    else if (nota >= 7 && nota <= 9) printf("Bom");
    else if (nota >= 5 && nota < 7) printf("Razoavel");
    else printf("Insuficiente"); 

    return 0;
}