/*20230202_001 Na turma existem 5 equipes, cada equipe está integrada por 4 alunos
 definidos pelo nome e sobrenome do aluno.  Crie um programa que permita armazenar os integrantes 
 das equipes e incorpore a funcionalidade que dado um nome retorne em a equipe do aluno.
*/

#include <stdio.h>
#include <string.h>

int main(){
	char nome[100], inserir[] = "s", esta[80], equi1[4][8], equi2[4][8], equi3[4][8], equi4[4][8], equi5[4][8];
	int equi = 0, comp =0, cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0, cont5 = 0, ass = 100, achar = 0, achaeq = 0;
	
	while (comp < 10){
		printf("Equipe do aluno: ");
		scanf("%d", &equi);
		if (ass != 0){
		printf("\nNome do aluno:\n ");
		}
		ass = 0;

		if (equi == 1 ){
			if (cont1 < 4){
							printf("aaaaa %d aaaaa", equi);

			
			scanf("%s %s", equi1[cont1], equi1[cont1 + 1]);
			cont1+=2;
			comp++;
			ass = 1;
			}

		}
		if (equi == 2){
			printf("aaaaa %d aaaaa", equi);
			if (cont2 < 4){
			
			scanf("%s %s", equi2[cont2], equi2[cont2+1]);
			cont2+=2;
			comp++;
			ass = 1;
		}
		}
		if (equi == 3 ){
			if (cont3 < 4){
						printf("aaaaa %d aaaaa", equi);

			scanf("%s %s", equi3[cont3], equi3[cont3+1]);
			cont3+=2;
			comp++;
			ass = 1;
		}
			
		}
		if (equi == 4){
			if (cont4 < 4){
						printf("aaaaa %d aaaaa", equi);

			scanf("%s %s", equi4[cont4], equi4[cont4+1]);
			cont4+=2;
			comp++;
			ass = 1;
			}
		}
		if (equi == 5 ){
			if (cont5 < 4){
							printf("aaaaa %d aaaaa", equi);

			
			scanf("%s %s", equi5[cont5], equi5[cont5+1]);
			cont5+=2;
			comp++;
			ass = 1;
	}

		}
		if (ass == 0){
			printf("\nequipe %d cheia\n", equi);
		}
	
	}
	
	comp = 0;
	cont1 = 0;
	cont2 = 0;
	while (strcmp(inserir, "s") == 0){
		printf("\nNome do aluno que deseja achar:\n");
		scanf("%s", nome);
		while (cont1 < 8 ){
			
			if (strcmp(nome, equi1[cont1]) == 0){
				//esta = equi1[cont1];
				achaeq = 1;	 
				printf("o aluno  esta na equipe %d\n", achaeq);
			}
				if (strcmp(nome, equi2[cont1]) == 0){
				//esta[1] = equi2[cont1];
				achaeq = 2;	 
				printf("o aluno  esta na equipe %d\n", achaeq);

			}
			if (strcmp(nome, equi3[cont1]) == 0){
				//esta[1] = equi3[cont1];
				achaeq = 3;	 
				printf("o aluno  esta na equipe %d\n", achaeq);

			}
			if (strcmp(nome, equi4[cont1]) == 0){
				//esta[1] = equi4[cont1];
				achaeq = 4;	 
				printf("o aluno  esta na equipe %d\n", achaeq);
				
			}
				if (strcmp(nome, equi5[cont1]) == 0){
				//esta[1] = equi5[cont1];
				achaeq = 5 ;
				printf("o aluno  esta na equipe %d\n", achaeq);	 
			}
			cont1++;
			
	}	
		if (achaeq == 0){
		printf("Aluno nao encontrado\n");
		}
		cont1=0;
		achaeq=0;
		printf("Deseja inserir outro nome?s/n \n");
		scanf("%s", inserir);
		
		}		cont1=0;
		cont2=0;
		while (cont1 < 20){
			printf("\n aluno 1 : %s\n", equi2[cont1]);
			cont1++;
		}
		
		
	
	


}
