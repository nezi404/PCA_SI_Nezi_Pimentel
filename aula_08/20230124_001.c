#include <stdio.h>

int main(){
	float seq[100];
	int cont ;
	for (cont = 0; cont < 100; cont++){
		printf("Numero menor que 100:\n");
		scanf("%f", &seq[cont]);
		if (seq[cont] > 100
		){
			printf("Numero invalido");
			cont--;
		}
		
	}
	for (cont = 99; cont >= 0; cont--){
	
	printf("%0.3f\n", seq[cont]);
	}
}
