/*
20221222_007. Um determinado material radioativo perde metade de sua
massa a cada 50 segundos. Dada a massa inicial, em gramas, fazer um
programa em C que calcule o tempo necessário para que essa massa se torne
menor que 0,5 grama. O programa em C deve escrever a massa inicial, a massa
final e o tempo calculado em horas, minutos e segundos.
*/
#include <stdio.h>

int main(){
	float massa, hora, massaatual;
	int minutos, segundos,tempo = 0 ;
	printf("Massa em gramas: ");
	scanf("%f", &massa);
	massaatual = massa;
	while (massaatual > 0.5){
		massaatual -= massaatual / 2;
		tempo += 50;
	}
	hora = (tempo/60)/ 60;
	minutos = (tempo - hora)/60;
	segundos = tempo - minutos*60;
	printf("Massa: %0.2f\nMassa Atual: %0.2f\nTempo gasto: %.0fhoras %dmin %dseg", massa, massaatual, hora, minutos, segundos, massaatual);
}
