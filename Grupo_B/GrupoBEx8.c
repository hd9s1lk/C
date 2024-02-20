//Implemene umprograma que,deenredoisnúmeros ornecidos pelo ulizador,
// permia enconrar o menor deles.

#include<stdio.h>

int main(int argc, char*argv[]){

    float num1, num2;
    printf("Insira o primeiro numero: ");
    scanf("%f", &num1);
    printf("Insira o segundo numero: ");
    scanf("%f", &num2);

    if(num1>num2){
        printf("O numero %f e o maior", num1);
    } else {
        printf("O numero %f e o maior", num2);
    }
    return 0;
}