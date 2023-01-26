
#include <stdio.h>
int fa2=0, fa3=0, fa4=0, fa5,fa6=0, a=5;
int face(int array_, int num, int face_){
    if (num == array_){
        face_++;
    }
   return face_; 
}

int main() {
    int tam, cont, fa1=0;
    printf("quantas jogadas?");
    scanf("%d", &tam);
    int numjog[tam];
    while (cont < tam){
        printf("Numero obtido na jogada %d: ", cont + 1);
        scanf("%d", &numjog[cont]);
        if (0>numjog[cont] || numjog[cont]>6){
        	printf("Numero invalido!\n");
        	cont--;
		}
        cont++;
    }
    cont=0;
    while (cont < tam){
    	if (1 == numjog[cont]){
    		fa1 +=1;
		}
		if (2 == numjog[cont]){
    		fa2 +=1;
		}if (3 == numjog[cont]){
    		fa3 +=1;
		}if (4 == numjog[cont]){
    		fa4 +=1;
		}if (5 == numjog[cont]){
    		fa5 +=1;
		}if (6 == numjog[cont]){
    		fa6 +=1;
		}
        
        cont++;
        
    }
    
   
    printf("Numero  de ocorrecia da face 1 : %d\n", fa1);
    printf("Numero  de ocorrecia da face 2 : %d\n", fa2);
    printf("Numero  de ocorrecia da face 3 : %d\n", fa3);
    printf("Numero  de ocorrecia da face 4 : %d\n", fa4);
    printf("Numero  de ocorrecia da face 5 : %d\n", fa5);
    printf("Numero  de ocorrecia da face 6 : %d\n", fa6);

        
        
         
    
    }
