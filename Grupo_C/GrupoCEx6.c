//Implemene um programa que permia enconrar o maior de 50 números
// inseridos pelo ulizador.

#include<stdio.h>

int main(int argc, char*argv[]){

    int num, i=0, maior;
    printf("Insira um número: ");
    scanf("%d",&num);
    maior = num;
    
    while(i<3){
        i++;
        printf("Insira um número: ");
        scanf("%d", &num);

        if(num>maior){
            maior = num;
        }
    }

    printf("%d", maior);

    return 0;
}