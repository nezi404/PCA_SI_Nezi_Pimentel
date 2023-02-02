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
void letmaiu(char maiu[100]){
    int cont1, tam;
    printf("%s", strupr(maiu));
    
}

void numlet(char pala[100]){
    int cont1, tam, numero;
    char num[]= {a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z};
    tam = strlen(pala[100]) + 1;
    for (cont1 = 0; cont1 < tam; cont1++){
        numero = strspn(pala[cont1], num[]);
        printf("%s", numero);

        

        
    } 
}
int main(){
    char palavra[] = " ";
    printf("Insira a palavra: ");
    scanf("%s", palavra);
    rever(palavra);
    letmaiu(palavra);
    numlet(palavra);
}
