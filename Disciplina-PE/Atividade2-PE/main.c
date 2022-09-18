#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	printf("Atividade do Bingo!\n\n");
	
	int numero = 0;
	do {
          printf("Informe um número qualquer de 1 até 500: ");
          fflush(stdin);
          scanf("%d", &numero);	
          
          if(numero < 1 || numero > 500) {
               printf("\nInforme o número novamente por favor: ");
          }
          	   	   		
	}while(numero < 1 || numero > 500);
	
	int count = 0, count_menos, valorCount;
	valorCount = numero + 1;
	count_menos = valorCount;
	for(count = 1; count <= numero; count++) { 
	     if(count_menos >= 1) {
	         count_menos--;
          }
         
          if((count % 4 == 0) && (count % 5 == 0)){
              printf("\n|BINGO|\t");
          }
          else if(count % 4 == 0) {
               printf("\n|M4|\t");
          }
          else if(count % 5 == 0){
               printf("\n|M5|\t");
          }
          else {
               if(count < 10) {
                   printf("\n|0%d|\t", count); 
               }
               else {
                   printf("\n|%d|\t", count); 
               }  
          }
          
          if((count_menos % 4 == 0) && (count_menos % 5 == 0)){
              printf("|BINGO|\n");
          }
          else if(count_menos % 4 == 0) {
               printf("|M4|\n");
          }
          else if(count_menos % 5 == 0){
               printf("|M5|\n");
          }
          else {
               if(count_menos < 10) {
                   printf("|0%d|\n", count_menos); 
               }
               else {
                   printf("|%d|\n", count_menos); 
               }  
          }
     }
     
     printf("\n\n");
     return 0;
}
