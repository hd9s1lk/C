//Uma empresa em para um deerminado uncionário uma fcha conendo o
// nome, número de horas rabalhadas e o número de dependenes de um
// uncionário. Considere que:
// • A empresa paga 12 euros por hora e 40 euros por cada dependene.
// • Sobre o salário são eios desconos de 8,5% para o INSS e 5% para IRS.
// Faça um algorimo e implemene um programa para ler o nome, o número de
// horas rabalhadas e o número de dependenes de um uncionário. Após a
// leiura, escreva qual o nome, o salário bruo, os valores desconados para cada
// po deimposo e fnalmene qual o salário líquido do uncionário.

int main(int argc, char*argv[]){

    char nome[50];

    printf("Insira o seu nome: ");
    scanf("%s", &nome);

    int horas;
    printf("Insira o número de horas que trabalhou: ");
    scanf("%d", &horas);

    int Ndependentes;
    printf("Insira o número de dependentes: ");
    scanf("%d", &Ndependentes);

    float Pagamento = (12*horas) + (40*Ndependentes);

    float INSS = 0.085*Pagamento;
    float IRS = 0.05*Pagamento;
    

    float PagamentoFinal = Pagamento - (IRS+INSS);

    printf("IRS: %f\n", IRS);
    printf("INSS: %f\n", INSS);
    printf("Pagamento Inicial: %f\n", Pagamento);
    printf("Pagamento Final: %f\n", PagamentoFinal);    


    return 0;
}