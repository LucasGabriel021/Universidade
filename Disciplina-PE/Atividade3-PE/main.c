#include <stdio.h> 
#include <stdlib.h> 
#include <locale.h> 

  

int main(void) { 
	setlocale(LC_ALL, "Portuguese"); 
	char res; 

	do { 

		printf("Atividade de média de notas!!"); 
		printf("\nRespostas |n| ou |s|\n\n"); 

		int count; 
		float media = 0, soma = 0, notas[5]; 
 
		for(count = 0; count < 5; count++) { 
			printf("Informe a nota %d°: ", count + 1); 
			fflush(stdin); 
			scanf("%f", &notas[count]); 
			soma += notas[count]; 
		}	 

		media = (soma / 5); 
		printf("\nA média da turma é: %.1f", media); 
		printf("\nDeseja executar novamente? "); 
		fflush(stdin); 
		scanf("%c", &res); 

	} while(res == 's' || res == 'S'); 

	printf("\n\n"); 
	return 0; 

}
