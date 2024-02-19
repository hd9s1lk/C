//Implemene umprograma que permia calcular a área de um quadrado.
// (Área=Lado*Lado), visualizando o resulado obdo, com:
// a) Lado =5cm.
// b) ovalor do lado deverá ser pedido ao ulizador.

#include <stdio.h>

int main(){

    float lado;

    printf("Insira um valor para o lado: ");
    scanf("%f", &lado);

    float Area = lado*lado;

    printf("Area final: %f\n", Area);
    
    return 0;
}