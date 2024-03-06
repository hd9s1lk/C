//Dada uma série de 20 valores reais, implemene um programa que calcule e
// escreva a média ariméca deses valores.Enreanose a média obdaor maior
// que 20 deverá ser aribuído o valor 20 para a média.

#include<stdio.h>

int main(int argc, char*argv[]){

    int i=0, total=0, num;
    float media;
    while(i!=20){
        i++;
        printf("Insira uma número: ");
        scanf("%d", &num);
        total = total + num;
    }

    media = total / 20;
    if(media>20){
        printf("A media e de 20 valores");
    } else {
         printf("%f", media);
    }
    

    return 0;
}