//Fa�a um algoritmo que apresenta a menor altura entre 10 pessoas,
//usando apenas a repeti��o enquanto.

//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//Fun��o principal
int main(){
	
//Declara��o de vari�veis	
int numero = 1;	
double altura, menor;
	
//Acentua��o das palavras
setlocale(LC_ALL, "Portuguese");
system("color A");   

//Entrada de informa��es
    while(numero <= 10){
    	printf("Qual a altura da %d� pessoa?", numero);
    	fflush(stdin);
    	scanf("%lf", &altura);
    	
    	if(numero == 1)
					menor = altura;
				if(menor > altura)
					menor = altura;
    	
    	numero++;
	}
	
	printf("\n\nA menor altura � %.2lf", altura);
	
//Pula linha	
	printf("\n\n");
	
//Pause do programa	
	system("pause");
	
//Retorno da fun��o 	
	return 0;
}
