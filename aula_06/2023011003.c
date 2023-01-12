/*
Faça uma função que dados dois inteiros positivos x e y verifica se y corresponde aos últimos dígitos de x. Ex. x= 567890,
y=890 R/corresponde; x= 2457, y= 245 R/não corresponde; x= 457, y= 2457 R/não corresponde
2023011004. Faça uma função que retorne se um número inteiro positivo x e segmento de outro número inteiro positivo y, 
onde x < y (pode usar a função desenvolvida em 3) Ex. x= 678, y= 567890 R/ é um segmento; x= 1243, y= 2212435 R/ é um segmento;
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


 
int contador (int num_, int dig_, int numlen_, int diglen_){
	
char intstr[20];
int num_dig, cont_dig = 0, instrlen, pote;
	
	pote = pow(10, diglen_);
	cont_dig = num_ % pote;
	if (cont_dig == dig_){
		printf("Dígitos %d  igual aos últimos dígitos de %d",dig_, num_);
	return 0;
	}
	else {
		printf("Dígitos %d não são iguais aos últimos dígitos de %d",dig_ , num_);
		return 0;
	}	
		
}
 
 int main () {
 	char nume[20], dige[20] ;
 	int  dig,numlen, num, diglen ;
 	system("chcp 65001");
	system("cls");
	setlocale(LC_ALL,"");
 	
 	
 	printf("Numero: ");
	scanf("%s", nume);
	printf("Ultimo(s) digito(s) desejado(s): ");
	scanf("%s", &dige);
	numlen = strlen(nume);
	num = atoi(nume);
	diglen = strlen(dige);
	dig = atoi(dige);
 	contador(num, dig, numlen, diglen);
 }	
