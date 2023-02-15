#include <stdio.h>
#include <string.h>

char listanomes[22][120], ordenada[22][120], ord[120];
char recebe(nome_){
    
    printf("Nome : ");
    scanf("%s", nome_);
    return nome_;
}

void printar(nome){

    printf("%s\n", nome);
}

void ordem_alfabetica(tamanho){
    int cont, cont2;
    for(cont = 0; cont < tamanho; cont++){
        for(cont2 = cont + 1; cont2 < tamanho ; cont2++){
            if(strcmp(ordenada[cont], ordenada[cont2])>0){
                strcpy(ord, ordenada[cont]);
                strcpy(ordenada[cont], ordenada[cont2]);
                strcpy(ordenada[cont2], ord);
            }
        }
    }
}
    

int main(){

char nome[120] = "", resposta[] = "s", opcao[5], remover[120];
int cont, cont2, encontrado = 0, tam;
for (cont = 0; cont < 20; cont++){
    recebe(nome);
    strcpy(listanomes[cont], nome);
    strcpy(ordenada[cont], nome);
}
    


while (strcmp(resposta, "s")==0){

    printf("O que deseja fazer?\na) imprimir a lista de nomes\nb) Eliminar um nome da lista.\nc) Imprimir os nomes da lista em ordem alfabetica.\nd) Inserir os nomes da lista em outra lista em ordem alfabetica\n");
    scanf("%s", opcao);
    printf("\n\n");
    tam = 20;
    if (strcmp(opcao, "a")==0){
        for (cont = 0; cont < tam ; cont++){
            printar(listanomes[cont]);
        }
    }

    if (strcmp(opcao, "b")==0){
        while(encontrado == 0){
            cont = 0;
            printf("Insira o nome que deseja remover: ");
            scanf("%s", remover);
            
            while (encontrado == 0 && cont < tam ){      
                if (strcmp(remover, listanomes[cont]) == 0){
                    encontrado = 1;
                    
                    }
                cont++;    
            }
            
            if (encontrado != 1){
            printf("Nome nao encontrado\n");
            }
        }
                
            if (encontrado == 1){
                cont--;
                for (cont2 = cont; cont2  < tam ; cont2++){
                 strcpy(listanomes[cont2], listanomes[cont2 +1]);
                 strcpy(ordenada[cont2], ordenada[cont2 +1]);
                
                
                }
                tam--;
            }
    }

    if (strcmp(opcao, "c")==0){
       ordem_alfabetica(tam);
       for (cont = 0; cont < tam ; cont++){
            printar(ordenada[cont]);
        }
    }

    if (strcmp(opcao, "d")==0){
        ordem_alfabetica(tam);  
    }
    
    
    encontrado = 0;
    printf("Deseja continuar? s/n\n");
    scanf("%s", resposta);
}
    
}
