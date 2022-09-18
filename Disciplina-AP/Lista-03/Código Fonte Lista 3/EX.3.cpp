//Faça um algoritmo que apresenta a menor altura entre 10 pessoas,
//usando apenas a repetição enquanto.

//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//Função principal
int main(){
	
//Declaração de variáveis	
int numero = 1;	
double altura, menor;
	
//Acentuação das palavras
setlocale(LC_ALL, "Portuguese");
system("color A");   

//Entrada de informações
    while(numero <= 10){
    	printf("Qual a altura da %dº pessoa?", numero);
    	fflush(stdin);
    	scanf("%lf", &altura);
    	
    	if(numero == 1)
					menor = altura;
				if(menor > altura)
					menor = altura;
    	
    	numero++;
	}
	
	printf("\n\nA menor altura é %.2lf", altura);
	
//Pula linha	
	printf("\n\n");
	
//Pause do programa	
	system("pause");
	
//Retorno da função 	
	return 0;
}
