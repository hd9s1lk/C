//Implemene um programa que peça ao ulizador os valores da base e da alura
// de umriângulo. Em seguida, apresene a área do mesmo.
// Obs.: Área = (Base * Alura) / 2.

#include<stdio.h>

int main(int argc, char*argv[]){

    float altura,  base;

    printf("Insira o valor da altura: ");
    scanf("%f", &altura);

    printf("Insira o valor da base: ");
    scanf("%f", &base);

    float Area = (base*altura) / 2;

    printf("Area Final: %f", Area);

    system("pause");
    return 0;
}