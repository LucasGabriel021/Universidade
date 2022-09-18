#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	printf("Aula dia 20/04/022");
	printf("\nAtividade de maior e menor nota\n\n");
	
	char res;
	int totalNotas = 0;
	
	do {
		printf("Informe quantas notas o senhor(a) deseja unserir: ");
		fflush(stdin);
		scanf("%d", &totalNotas);	
		
		if(totalNotas > 10 ){
			printf("ERRO!\n");
		}
		
	}while(totalNotas > 10);
	
	do {
		float notas[10], menorNota = 0, maiorNota = 0;
		int count;
		
		for(count = 0; count < totalNotas; count++) {
			printf("Informe a %d° nota: ", count + 1);
			fflush(stdin);
			scanf("%f", &notas[count]);
			
			if(count == 0) {
				menorNota = notas[count];
				maiorNota = notas[count];
			}
			else {
				if(notas[count] < menorNota) {
					menorNota = notas[count];
				}
				
				if(notas[count] > maiorNota) { 
					maiorNota = notas[count];
				}	
			}
		}
		
		printf("A maior nota entre todas informadas é %.1f \n", maiorNota); 
		printf("A menor nota entre todas informadas é %.1f \n", menorNota);
				
		printf("\nDeseja executar novamente? "); 
		fflush(stdin); 
		scanf("%c", &res);
		
	}while(res == 's' || res == 'S');
	
	printf("\n\n");
	return 0;
}
