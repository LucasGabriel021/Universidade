// Fa�a um algoritmo que leia dois n�meros calcule o resultado da multiplica��o de um pelo 
//outro sem utilizar a opera��o de multiplica��o (ou seja, utilizando apenas soma)

//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//Fun��o principal
int main(){
	
//Declara��o das vari�veis
int numero2, numero1, i = 0, soma = 0;	
	
//Acentua��o das palavras
setlocale(LC_ALL, "Portuguese");
	
//Entrada das informa��es
system("color A");

      printf("Informe o primeiro n�mero:");
	  fflush(stdin);
	  scanf("%d", &numero1);	
	  printf("Informe o segundo n�mero:");
	  fflush(stdin);
	  scanf("%d", &numero2);
	
//C�lculos	
	
	  for(i = 0; i < numero1; i++){
	  	soma = (soma + numero2);	
	  }
	
      printf("\nA multiplica��o do primeiro n�mero mais o segundo � %d", soma);	
	
//Pula linha
printf("\n\n");
	
//Pause do sistema
system("pause");

//Retorna da fun�ao
return 0;	
}
