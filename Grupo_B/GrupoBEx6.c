//Implemene um programa que aça a classifcação qualiava de uma noa (valor
// ineiro) de um aluno segundo os seguines níveis:
// • 0 <=noa < 5:péssimo;
// • 5 <=noa < 8:mau;
// • 8 <=noa < 10:insufciene;
// • 10<=noa < 12:sufciene;
// • 12<=noa < 16:bom;
// • 16<=noa < 18:muiobom;
// • 18<=noa <=20:excelene;

#include<stdio.h>

int main(int argc, char*argv[]){

    float nota;
    printf("Insira a sua nota: ");
    scanf("%f", &nota);

    if(0<nota<=5){
        printf("Pessimo\n");
    } else if (5<nota<=8){
        printf("Mau\n");
    } else if (8<nota<=10){
        printf("Insuficiente");
    } else if (10<nota<=12){
        printf("Suficiente");
    } else if (12<nota<=16){
        printf("Bom\n");
    } else if (16<nota<=18){
        printf("Muito bom\n");
    } else if (18<nota<=20){
        printf("Excelente\n");
    }

    return 0;
}