#include <stdio.h>
#include <string.h>



int main(){
    char palavra[] = " ", fra[20], res[] = "s" ;
    printf("Insira o item desejado: ");
    scanf("%s", palavra);
    while (strcmp(res, "n")!= 0){
        
        if (strcmp(palavra, "a") == 0){
            printf("ler string de no maximo 20 caracteres\n");
            scanf("%s", fra);
           }
        

        if (strcmp(palavra, "b") == 0){
            printf("%s", strlen(fra));
           }
          
        printf("deseja continuar? s/ n\n");
        scanf("%s", res);
        if (strcmp(res, "s") == 0){
        printf("Insira o item desejado: ");
        scanf("%s", palavra);
    }
}
