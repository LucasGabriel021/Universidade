#include <stdio.h> //Biblioteca de comandos de entrada e sa�da
#include <stdlib.h> //Biblioteca de comandos gerais
#include <locale.h> //Biblioteca de acentua��o

int main(void) {
	system("color 2"); //Mudar cor do console
	setlocale(LC_ALL, "Portuguese"); //Idioma do sistema
	int idade; //Vari�vel de idade
	
	    printf("Atividade Eleitoral\n\n");
	    printf("Informe sua idade:");
	    fflush(stdin);
	    scanf("%d", &idade);
	    
	    if(idade < 1) {
		   printf("\n\nEssa pessoa n�o existe!");
	    }
	    else {
	          if(idade <= 15) {
 	   		  printf("\n\nEssa pessoa n�o pode votar ainda!");
		     }
	          else {
                    if(idade <= 17) {
	    			     printf("\n\nEssa pessoa o voto � opcional!");
  			     }
  			     else {
  			     	if(idade <= 64) {
  			     		printf("\n\nEssa pessoa o voto � obrigat�rio!");
  			     		if(idade == 41) {
  			     			printf("\nParab�ns, o senhor(a) ganhou o 1� pr�mio de R$: 1.000.000,00 de reais!");
					     }
			          }
			          else {
			          	if(idade >= 65) {
			          		printf("\n\nEssa pessoa o voto � opcional!");
			          		if(idade == 82) {
					    		     printf("\nParab�ns, o senhor(a) ganhou o 2� pr�mio de R$: 500.000,00 de reais!");
			     		     }
						}
					}
			     }
		     } 
	    }
	return 0;
	printf("\n\n");
}
