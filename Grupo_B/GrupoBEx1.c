//Implemene um programa que peça ao ulizador uma noa de avaliação
// (numérica) e que indique se o aluno esá APROVADO ou REPROVADO.

#include<stdio.h>

int main(int argc, char*argv[]){

    float nota;
    printf("Insere a nota do aluno: ");
    scanf("%f", &nota);

    if(nota>=9.5 && nota<=20){
        printf("Aprovado");
    } else {
        printf("Reprovado");
    }


    return 0;
}