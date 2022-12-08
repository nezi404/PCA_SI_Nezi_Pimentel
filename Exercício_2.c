#include <stdio.h>
#include <string.h>

int main(){
    int idade;
    char nome[14], sexo[14], gen[14] = "mulher";
    printf("Qual é seu sexo?");
    scanf("%s", sexo);
    printf("Qual é seu nome?");
    scanf("%s", nome);
    printf("Qual é sua idade?");
    scanf("%d", &idade);
    
    if (strcmp(sexo, gen)==0) {
        printf("é mulher");
    }
    else{
        printf("não é mulher");
    } 
    
    return 0;
}
