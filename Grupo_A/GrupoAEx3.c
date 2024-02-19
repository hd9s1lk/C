//Implemene um programa que permia somar dois quaisquer números,
// visualizando o resulado obdo.

#include<stdio.h>

int main(int argc, char*argv){

    float num1, num2;

    printf("Insira o primeiro número: ");
    scanf("%f", &num1);

    printf("Insira o segundo número: ");
    scanf("%f", &num2);

    float sum = num1 + num2;

    printf("Soma: %f", sum);


    return 0;
}