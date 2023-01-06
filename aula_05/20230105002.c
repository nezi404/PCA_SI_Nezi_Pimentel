/*
20230105002. Um centro materno-infantil deseja criar um programa para recomendar aos médicos sobre o tipo de parto a ser adotado. O mecanismo de recomendação utiliza o peso do feto e quantidade de semanas de gestação para sugerir o tipo de parto mais indicado. Desenvolva um programa na linguagem C, o qual deverá:
- Criar uma função para ler o peso do feto em gramas e a quantidade de semanas da gestação.
- Criar uma  função para:
    -Caso o peso do feto seja inferior que 100 gramas ou a quantidade de semanas menor que 28, o programa deverá exibir a mensagem "Parto não deverá ser realizado, reavaliar clinicamente" e encerrar a execução.
    -Caso contrário, o programa deverá calcular a quantidade de meses (considerar 4 semanas para cada mês) do feto e exibir uma das recomendações abaixo:
        .Peso superior a 2.500 gramas e com mais de 7 meses: "Parto normal";
        .Peso superior a 2.500 gramas e abaixo ou com 7 meses: "Parto Cesariana";
        .Entre 2.000 gramas e 1.500 gramas e acima de 9 meses: "Parto normal";
        .Qualquer outra combinação, "Parto Cesariana".
Utilizar as duas funções num programa.
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <stdlib.h>


float peso, sem;

float lerdados(){
	printf("Peso do feto em gramas: ");
	scanf("%f", &peso);
	printf("Quantidade de semanas da gestação: ");
	scanf("%f", &sem);
}

void prescricao (){
	float mes, vercond = 0;
	if (peso < 100 || sem < 28){
		printf("Parto não deverá ser realizado, reavaliar clinicamente");
		_Exit(0);
	}
	else {
		mes= sem/4;
		if (mes > 7 && peso > 2500){
			printf("Parto normal");
			vercond = 1;
		}
		if (mes <= 7 && peso > 2500){
			printf("Parto Cesariana");
			vercond = 1;
		}
		if (2000 > peso && peso > 1500 && mes > 9){
		printf("Parto normal");
		vercond = 1;	
		}
		if (vercond == 0){
			printf("Parto Cesariana");
		}
	}
	
}
int main(){
	system("chcp 65001");
	system("cls");
	setlocale(LC_ALL,"");
	lerdados();
	prescricao();
}
