
#include <stdio.h>
int prodesc(){

	int tam, prodint, cont;
	printf("Tamanho dos vetores: ");
	scanf("%d", &tam);
	int vetora[tam], vetorb[tam];
	while (cont < tam){
		printf("Numeros do primeiro vetor: \n");
		scanf("%d", &vetora[cont]);
		cont++;
	}
	cont = 0;
		while (cont < tam){
		printf("Numeros do segundo vetor: \n");
		scanf("%d", &vetorb[cont]);
		cont++;
	}
	cont = 0; 
	while (cont < tam){
		prodint += vetora[cont] * vetorb[cont];
		cont++;
	}
	printf("\nO produto escalar eh: %d", prodint);
}
int main(){
	prodesc();
}



