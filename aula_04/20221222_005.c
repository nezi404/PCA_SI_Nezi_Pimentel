/*
20221222_005. Faça um programa em C que calcula e escreve a seguinte
soma: soma = 1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50
*/
 
TA ERRANDOOOOOOOOOOO
#include <stdio.h>

int main(){
	float fracao= 0, somafra = 0;
	int num = 1 , deno = 1;
	
	while (deno < 50){
		fracao = num/deno;
		printf("%01d / %01d\n", num, deno);
		num = num + 2;
		deno = deno + 1;
		somafra = somafra + fracao;
	
		
		}
	printf("%0.2f", somafra);
}
