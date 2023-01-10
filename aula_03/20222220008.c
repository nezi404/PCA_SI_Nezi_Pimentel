#include <stdio.h>
#include <string.h>

int main(){
	float nota, somanota, media, maior, menor;
	char outro[5] = "sim", recebenota[5] = "nao", pergunta[5] = "sim";
	int contador = 1;
	while (strcmp(pergunta, outro) == 0){
		for(contador; contador <= 3; contador++){
			printf("Nota %d : ", contador);
			scanf("%f", &nota);
			somanota = somanota + nota;
			if (contador == 1){
				maior = nota;
				menor = nota;
			}
			if (nota > maior){
				maior = nota;
			}
			if ( nota < menor){
				menor = nota;
			}
			if (contador == 3){
				printf("Deseja inserir as notas de outro aluno? ");
				scanf("%s", &pergunta);
			
				if (strcmp(recebenota, pergunta)==0){
					media = somanota / 3;
					printf("A maior nota : %0.2f\nA menor nota : %0.2f\nA media : %0.2f", maior, menor, media);
				}
				if (strcmp(outro, pergunta)==0){
					contador = 0;
					menor = 0;
					maior = 0;
					somanota = 0;
					
					}
			
			}
				
			
		}
    }
	
		
}
