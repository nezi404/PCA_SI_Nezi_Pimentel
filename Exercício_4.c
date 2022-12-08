#include <stdio.h>

int main() {
    int porcentagem;
    float conta, progarcom;
    printf("Qual o valor da conta? ");
    scanf("%f", &conta);
    printf("Qual o valor da porcentagem do garçom? ");
    scanf("%d", &porcentagem);
    progarcom = (conta * porcentagem)/100;
    printf("O valor pro garçom é R$%0.2f", progarcom);
}
