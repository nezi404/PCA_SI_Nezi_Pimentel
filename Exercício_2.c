#include <stdio.h>
#include <string.h>

int main(){
    int idade;
    char nome[14], sexo[14], gen[14] = "mulher", out[10] = "homem", genm[10] = "M", genh[10] = "H";
    printf("Qual é seu sexo?");
    scanf("%s", sexo);
    printf("Qual é seu nome?");
    scanf("%s", nome);
    printf("Qual é sua idade?");
    scanf("%d", &idade);
    
    if (strcmp(sexo, gen)==0 || strcmp(genm, sexo)==0) {
        printf("é mulher");
    }
    else
    if (strcmp(sexo, out)==0 || strcmp(sexo, genh)==0) {
        printf("não é mulher");
    } 
    else {
        printf("Caractere(s) inválido(s), somente H, M, homem ou mulher!");
    }
    return 0;
}
