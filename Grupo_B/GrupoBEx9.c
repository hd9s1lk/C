//Implemene um programa que, de enre rês números ornecidos pelo ulizador,
//permia enconrar o maior deles.

#include<stdio.h>

int main(int argc, char*argv[]){

    float num1, num2, num3, maior;
    printf("Insira o primeiro numero: ");
    scanf("%f", &num1);
    printf("Insira o segundo numero: ");
    scanf("%f", &num2);
    printf("Insira o terceiro numero: ");
    scanf("%f", &num3);

    if(num1>num2){
        maior = num1;
    } else {
        maior = num2;
    }

    if(num3>maior){
        maior = num3;
        printf("O numero %f e maior", maior);
    } else {
        maior = num2;
        printf("O numero %f e maior", maior);
    }
    
    return 0;
}