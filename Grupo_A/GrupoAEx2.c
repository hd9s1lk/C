//Implemene um programa que permia calcular o perímero e a área de um
//reângulo (Área=alura*base), com:
//a) alura=3 cm e base=8 cm.
//b) ovalor das variáveis a ser pedido ao ulizador.

#include<stdio.h>

int main(int argc, char* argv[]){

    float altura, base;

    printf("Insira um valor para a altura: ");
    scanf("%f", &altura);

    printf("Insira um valor para a base: ");
    scanf("%f", &base);

    float Area = altura*base;
    float perimetro = (altura*2) + (base*2);

    printf("Area final: %f", Area);
    printf("Perimetro final: %f", perimetro);

    return 0;
}