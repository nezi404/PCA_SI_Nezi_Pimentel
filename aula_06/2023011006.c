/*
2023011006. Faça uma função que transforme um numero decimal em binário. 
(procura em internet como é feita essa transformação)
*/

#include <stdio.h>
void bitodec (int decin_){
	int binar, divi = decin_;
	while (divi != 1){
	binar += divi % 2;
	divi = divi/2;
	if (divi == 1){
		printf("0");
	}
	
	printf("%d", binar);
	
	
	}

}

int main (){
	int decin;
	printf("Numero decimal: ");
	scanf("%d", &decin);
	bitodec(decin);
}
