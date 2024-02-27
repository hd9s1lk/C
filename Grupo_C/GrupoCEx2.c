//Implemene um programa que permia calcular a soma dos 20 primeiros números
// pares posivos.

#include<stdio.h>

int main(int argc, char*argv[]){

    int i=0,sum=0;
    while(i<20){
        i++;
        if(i%2==0){
            sum = sum + i;
        } else {
            continue;
        }
    }

    printf("%d", sum);

    return 0;
}