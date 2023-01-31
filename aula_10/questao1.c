#include <stdio.h>
#include <string.h>

void rever(char reversa[100]){
    printf("%s\n",strrev(reversa));
}
void semvogal(char semv[100]){
    int cont1, tam;
    tam = strlen(semv[100]) + 1;
    for (cont1 = 0; cont1 < tam; cont1++){

        printf("%s", semv[cont1]);

        
    } 
}

int main(){
    char palavra[] = " ";
    printf("Insira a palavra: ");
    scanf("%s", palavra);
    rever(palavra);
    semvogal(palavra);
    
}
