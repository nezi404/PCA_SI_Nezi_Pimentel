#include <stdio.h>

int main() {
  int termo1=1, termo2=1, resul;
  while (termo1 < 10){
        while (termo2 < 10){
            resul = termo1 + termo2;
            printf("%d + % d = %d\n", termo1, termo2, resul);
                termo2 = termo2 + 1;}
        termo1 = termo1 + 1;
        termo2 = 1;
  }
       
     
  
}





