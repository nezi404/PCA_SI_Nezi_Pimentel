#include <stdio.h>

int crescente(){	
	
	int tam, conta = 0, contador = 0, temp;
	printf("Qual o tamanho do vetor? ");
	scanf("%d", &tam);
	int num[tam];
	while (conta < tam){
		printf("Numeros: ");
		scanf("%d", &num[conta]);
		conta++;
		
	}

	conta = 0;
	while (conta < tam ){			//5,2,3   // 2,5,3  //2,3, 5   
		while (contador < tam ){
			if (num[conta] < num[contador]){
			temp = num[conta]; // 
			num[conta] = num[contador];// 
			num[contador] = temp;//
			
			}
		contador+=1;

		}
		contador = 0;
		conta++;
	}
	conta = 0;
	while (conta < tam ){
	printf("%d\n", num[conta]);
	conta++;
	}
	
	

}


int main(){

	crescente();
}
