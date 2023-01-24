#include <stdio.h>

int main(){
	float seq[10];
	int cont ;
	for (cont = 0; cont < 10; cont++){
		printf("Numero menor que 100:\n");
		scanf("%f", &seq[cont]);
		if (seq[cont] > 100
		){
			printf("Numero invalido");
			cont--;
		}
		
	}
	for (cont = 9; cont >= 0; cont--){
	
	printf("%0.3f\n", seq[cont]);
	}
}
