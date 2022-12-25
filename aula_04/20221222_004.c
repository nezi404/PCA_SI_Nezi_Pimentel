/*
20221222_004. Dado um número identificar se é um número primo. (Um
número primo é aquele que é dividido apenas por um e por ele mesmo.)
*/

#include <stdio.h>

int main(){
	int cont1=2, num;
	printf("Insira o numero: "); 
	scanf("%d", &num);
	while (cont1 < num){
		if (num % cont1 == 0){
			printf("Nao eh primo");
			return 0;
		}
		cont1++;	
	}
	
	printf("Eh primo");
	
}
	
