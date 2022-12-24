/*
20221222_006. Dado um número n inteiro e positivo, dizemos que n é perfeito
se n for igual à soma de seus divisores positivos diferentes de n. Construa um
programa em C que verifique se um dado número é perfeito. Ex: 6 é perfeito,
pois 1+2+3 = 6.
*/
#include <stdio.h>

int main(){
	int num, cont1 = 0, resul = 0, value;
	printf("Numero: ");
	value = scanf("%d", &num);
	while (resul < num  ){
		cont1 = cont1 + 1;
		resul = cont1 + resul;
		
	}	
	
	if (num < 0 || value == 0 ){
		printf("Nao sao permitidos numeros negativos");
		return 0;
		
	}
	if (resul == num){
		printf("%d eh um numero perfeito. ", num);
	
	}
	if (resul != num){
		printf("%d nao eh um numero perfeito. ", num);

	}
		
		
}
