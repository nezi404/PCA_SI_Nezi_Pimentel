/*
20230105003. Um número perfeito é um número inteiro para o qual a soma de todos os seus divisores positivos próprios (excluindo-o) é igual ao próprio número. Por exemplo, o número 6 é um número perfeito, pois: 6 = 1 + 2 + 3. O próximo número perfeito é o 28, pois: 28 = 1 + 2 + 4 + 7 + 14.
Escreva um programa em C com as seguintes funções:
- Função para ler um número inteiro e verifique se ele é par, caso seja impar obrigue o usuário a digitar outro número até que um número par seja digitado;
- Função para verificar se o número digitado é perfeito e imprima uma mensagem na tela indicando se o número digitado é perfeito ou não.
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


int num;

void verpar(){
	while (0==0){	
	printf("Número: ");
	scanf("%d", &num);
	if (num % 2 == 0){
		break;
	}
	printf("Insira um numero par!\n");
	}
}	
void verperfeito(){
	int cont1 = 0, resul = 0;
	while (resul < num  ){
		cont1 = cont1 + 1;
		if (num % cont1 == 0){
			resul = cont1 + resul;
		}			
	}	
		if (resul == num){
			printf("É perfeito.");
		}
		else {
			printf("Não é perfeito.");
		}
}

int main(){
	system("chcp 65001");
	system("cls");
	setlocale(LC_ALL,"");
	verpar();
	verperfeito();
	
	}
		
		
