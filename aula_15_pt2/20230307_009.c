#include <stdio.h>
#include <string.h>

void acharletra(char *palavra, char *letra, char *endchar, int *tamvet){
    int vetor[30], *pvet = &vetor[0], cont=0;
    char  *pcurchar = palavra;
    while (palavra[cont]!= *endchar){
        vetor[cont] = 0;
        if (*letra == palavra[cont]){
            vetor[cont] = 1;
            *tamvet = *tamvet + 1;
        }
        printf("%c ", palavra[cont]);
        cont++;
    }
    cont=0;
    printf("\n");
    while (palavra[cont]!= *endchar){
            printf("%d ", vetor[cont]);
        cont++;
    }
}


int main() {
    char pala[30], *ppala = pala, letra[2], strend[] = "\0", *pletra = letra, *pstrend = strend;
    int numlet = 0;
    printf("Palavra: ");
    scanf("%s", ppala);
    printf("Letra: ");
    scanf(" %c", pletra);
    acharletra(ppala, pletra, pstrend, &numlet);
    printf("\nA ocorrencia da letra %c foi de %d", *pletra, numlet);

}
