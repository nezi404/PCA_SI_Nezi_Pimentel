/* 
20222220007  Em uma disciplina com três exercícios, um professor deseja saber qual a maior e a menor nota
de cada exercício e qual a maior e a menor média final. Faça um programa para auxiliá-lo nesta tarefa.
*/

#include <stdio.h>

int main(){
	float nota, somanota, media, maior, menor;
	int contador = 1;
	for(contador; contador <= 4; contador++){
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
		
		}
	media = somanota / 4;
	printf("A maior nota : %0.2f\nA menor nota : %0.2f\nA media : %0.2f", maior, menor, media);
		
}
