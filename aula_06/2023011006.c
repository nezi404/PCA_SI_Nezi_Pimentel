/*
2023011006. Faça uma função que transforme um numero decimal em binário. 
(procura em internet como é feita essa transformação)
*/

#include <stdio.h>
#include <string.h>

void bitodec (int decin_){
	int binar, divi = decin_;
	char tempchar[100], binastr[100];
	while (divi != 0){
	binar = divi % 2;
	divi = divi/2;
	
	sprintf(tempchar, "%d", binar);
	strcat(binastr, tempchar);
	
	
	
	}
	// esta com erro no printf, esta imprimindo outros dois caracteres 
	printf("%s", strrev(binastr));

}

int main (){
	int decin;
	printf("Numero decimal: ");
	scanf("%d", &decin);
	bitodec(decin);
}
