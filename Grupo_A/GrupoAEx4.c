//O volume de um cilindro é dado por: V = π *r2* h(considere π = 3,141592654).
// a) Implemeneumprogramaquecalculeovolume(V)deumcilindroaravés
// dos valores da alura (h) do cilindro e do raio (r) da base.
// b) Repia o exercício anerior ulizando a unção “pow” da biblioeca
// “mah.h”.
// Apresene os resulados com 4 casas decimais.

#include<stdio.h>
#include<math.h>

int main(int argc, char*argv[]){

    float altura, raio;
    float PI = 3.141592654;

    printf("Insira a altura do cilindro: ");
    scanf("%f", &altura);

    printf("Insira o raio da base: ");
    scanf("%f", &raio);

    float Volume = PI * pow(raio,2) * altura;

    printf("Volume final: %0.4f", Volume);

    return 0;
}