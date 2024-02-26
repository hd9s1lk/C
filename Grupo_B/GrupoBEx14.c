//Implemene um programa que permia converer quilómeros em milhas. Se o
// número de quilómeros or superior a 5000 deve ambém visualizar “muio
// longe”. 1 milha = 1609 meros

#include<stdio.h>

int main(int argc, char*argv[]){

    int km;
    printf("Insira o numero de km percorridos: ");
    scanf("%d", &km);

    int final;
    final = (km * 1) / 1.6;

    printf("Resultado final em milhas: %d", final);

    return 0;
}