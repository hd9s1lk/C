//Implemene um programa que leia 30 números ineiros posivos e visualize o
// menor deles.

#include<stdio.h>

int main(int argc, char*Argv[]){

    int num, i=0, menor;
    printf("Insira um número: ");
    scanf("%d",&num);
    menor = num;
    
    while(i<3){
        i++;
        printf("Insira um número: ");
        scanf("%d", &num);

        if(num<menor){
            menor = num;
        }
    }

    printf("%d", menor);


    return 0;
}