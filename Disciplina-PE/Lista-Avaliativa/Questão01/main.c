#include <stdio.h> //Biblioteca de comandos de entrada e sa�da
#include <stdlib.h> //Biblioteca de comandos gerais
#include <locale.h> //Biblioteca de acentua��o

/*
Para evolu��o do nosso sistema eleitoral, informe uma idade utilizando o tipo inteiro.
Como sa�da de dados dever� ser considerado:
- Idade menor que 0 n�o nasceu
- 0 at� 15 n�o vota
- 16 ou 17 opcional
- 18 at� 64 obrigat�rio
- 65 ou mais opcional
- Exatamente 41 ganha pr�mio 1 (n�o dever� apresentar obrigat�rio)
- Exatamente 82 ganha pr�mio 2 (n�o dever� apresentar opcional)
- N�o dever� utilizar a instru��o "else if", somente "if" e "else"
- N�o dever� utilizar || (or) e && (and)
*/

int main(void) {
	system("color 2"); //Mudar cor do console
	setlocale(LC_ALL, "Portuguese"); //Idioma do sistema
	int idade; //Vari�vel de idade
	
	    printf("Lista Avaliativa!\n");
         printf("Quest�o 01\n");
	    printf("Sistema Eleitoral Eleitoral\n\n");
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
