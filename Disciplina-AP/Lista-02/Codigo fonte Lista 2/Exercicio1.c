#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int velocidade = 0;
	
	    printf("Informe a velocidade do carro na rodovia: ");
	    fflush(stdin);
	    scanf("%d", &velocidade);
	    
               if(velocidade <= 80) {
	 		     printf("O veículo não foi multado!"); 	
               }
               else {
               	printf("O veìculo ultrapassou o limite de velocidade!");
			}
			
	return 0;
}
