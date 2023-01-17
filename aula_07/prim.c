#include <stdio.h>

int main(){
	int cont= 0;
	float nota = 1, media, maiornota = 0;
	while (nota >=0){
		printf("Insira a nota do aluno: ");
		scanf("%f", &nota);
		if (nota > maiornota){
			maiornota = nota;
			
		}
		cont++;
	}	
	media =nota/cont;

	printf("Media: %0.2f\nMaior nota: %0.2f\nMenor nota: %0.2f",media, maiornota,nota );
	
}
