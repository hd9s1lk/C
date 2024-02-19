//Elabore um algorimo que permia calculara classifcação média de um esudane
// aendendo às classifcações obdas nas duas requências e visualizar se oi
// aprovado ou reprovado, endo em cona que um aluno aprova sempre que a
// média é superior ou igual a 9,5 valores.
// a) Considere que o peso decada requência é de 50%.
// b) Repia o exercício anerior considerando que o peso das requências é de
// 40% para a 1ª e 60% para a 2ª, e que para cada uma delas é obrigaória
// uma noa mínima de 8,5 valores, sem a qual o aluno esá
// auomacamene reprovado.
// Apresene os resulados com 1 casa decimal.

#include<stdio.h>

int main(int argc, char*argv[]){

    float nota1,nota2;
    printf("Insira a sua primeira nota: ");
    scanf("%f", &nota1);

    printf("Insira a sua segunda nota: ");
    scanf("%f", &nota2);

    float NotaFinal = (nota1*0.5) + (nota2*0.5);

    if(NotaFinal>=9.5){
        printf("Aprovado com %0.1f", NotaFinal);
    } else {
        printf("Reprovado com %0.1f", NotaFinal);
    }


    return 0;
}