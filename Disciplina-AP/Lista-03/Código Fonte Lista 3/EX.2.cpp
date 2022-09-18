// Faça um algoritmo que leia dois números calcule o resultado da multiplicação de um pelo 
//outro sem utilizar a operação de multiplicação (ou seja, utilizando apenas soma)

//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//Função principal
int main(){
	
//Declaração das variáveis
int numero2, numero1, i = 0, soma = 0;	
	
//Acentuação das palavras
setlocale(LC_ALL, "Portuguese");
	
//Entrada das informações
system("color A");

      printf("Informe o primeiro número:");
	  fflush(stdin);
	  scanf("%d", &numero1);	
	  printf("Informe o segundo número:");
	  fflush(stdin);
	  scanf("%d", &numero2);
	
//Cálculos	
	
	  for(i = 0; i < numero1; i++){
	  	soma = (soma + numero2);	
	  }
	
      printf("\nA multiplicação do primeiro número mais o segundo é %d", soma);	
	
//Pula linha
printf("\n\n");
	
//Pause do sistema
system("pause");

//Retorna da funçao
return 0;	
}
