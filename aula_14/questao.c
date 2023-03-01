// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int mulher( char genero[15], int conti, int indiceeq ){
    int cont = 0;
    if (strcmp(genero, "m")== 0 && conti < indiceeq){
            cont++;
        }
    return cont;
    
}

int projeto( char genero[15], int nota){
    if (strcmp(genero, "m") ==0 ){
             if (nota >= 8){
                return 1;
             }
    }
    return 0;
}

int adicionapontos(char genero[15], int i, int index, int nota){
        if(strcmp("m", genero)== 0 && i < index && nota != 10){
            return 1;
        }
    return 0;
}

char adicionaraluno(char nomes[][15], char generos[][2], int notas[15]){
    char nome[15], genero[10];
    int nota = 0;
    printf("Nome: ");
    scanf("%s", nome);
    printf("Genero: ");
    scanf("%s", genero);
    printf("Nota: ");
    scanf("%d", &nota);
    strcpy(nomes[13], nome);
    strcpy(generos[13], genero);
    notas[13] = nota;
    
}

int main() {
    char equipes[13][15] = {"ana", "maria", "joao", "felipe", "cleiton", "roberto", "helena", "emilia", "claudia", "henrique", "fred", "gloria"};
    char gen[13][2] = {"m", "m", "h", "h", "h", "h", "m", "m","m", "h", "h", "m"};
    char projet[13][15];
    int notas[13] = {10, 7, 7, 8, 6, 7, 10, 7, 8, 9, 7, 7};
    int contm1 = 0, contm2 = 0, i, cont = 0, proj = 0;
    
    for (i = 0; i < 12; i++){
        contm1 += mulher(gen[i], i, 6);
        contm2 += mulher(gen[i], 5, i);
         
        proj = projeto(gen[i], notas[i]);
        if (proj == 1){
            strcpy(projet[cont], equipes[i]);
                printf("Apta ao projeto:  %s\n",projet[cont]);
                cont++;
        }
        notas[i] += adicionapontos(gen[i], i, 6, notas[i]);
        notas[i] += adicionapontos(gen[i], 5, i, notas[i]);
    }
    
    if (contm1 > contm2){
        printf("A equipe 1 possui mais mulheres\n");
    }
    if (contm1 < contm2){
        printf("A equipe 2 possui mais mulheres\n");
    }
    if (contm1 == contm2){
        printf("As duas equipes possuem a mesma quantidade de mulheres\n");
    }
    adicionaraluno(equipes, gen, notas);
    printf("aluno %s\nnota: %d\ngenero:%s",equipes[13], notas[13], gen[13] );
}
