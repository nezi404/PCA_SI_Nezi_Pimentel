
/*
Exercícios
(na solução destes exercícios não pode utilizar estrutura de dados tipos array)
2023011001. Faça uma função que dados um inteiro n e um inteiro d, 0 < d < 9, devolve quantas vezes o dígito d aparece em n. (dica: utilizar o operador % na solução )
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


 
int contador (int num_, int dig_, int numlen_){
	
char intstr[20];
int num_dig, cont_dig = 0, valor, instrlen, temval = 0;

sprintf(intstr,"%d", num_);
instrlen= strlen(intstr);
valor = num_;


	
	while (num_ > 0) {
			
		cont_dig = num_ % 10;
		num_ = num_ / 10;
		if (cont_dig == dig_){		
		num_dig++;
		temval = 1;
		}	
		
	}
		
		if (valor == 0 && dig_ == 0){
			num_dig = numlen_;		

		}
		if ( valor != 0 && temval == 0){
		
		    num_dig = numlen_ - instrlen;
		}
	
	printf("Quantidade de digitos iqual a %d: %d",dig_, num_dig);
	
	
}
	
	

 
 int main () {
 	char nume[20];
 	int dig, numlen, num ;
 	printf("Numero: ");
	scanf("%s", nume);
	printf("Um digito desejado: ");
	scanf("%d", &dig);
	numlen = strlen(nume);
	num = atoi(nume);
 	contador(num, dig, numlen);
 }	
