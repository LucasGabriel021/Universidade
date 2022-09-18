//Construa um algoritmo que calcule o fatorial de um número usando a estrutura PARA...FAÇA,
//baseando-se na definição matemática (N! = 1x2x3x...x N-1 x N e 0! = 1 por definição)

//Biblioecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//Funçao principal
int main()
{

//Declaraçao das variaveis
int numero, fatorial,  i;	
	
//Acentuação das palavras
setlocale(LC_ALL, "Portuguese");
system("color A");
	
//Entrada dos dados
	    printf("Informe o número a seguir para o cálculo do fatorial:");
	    fflush(stdin);
	    scanf("%d", &numero);
	
	if((numero == 0) || (numero == 1))
	    printf("\nO fatorial do número %d! é 1 ", numero);
	
	else if((numero != 0) || (numero != 1)){    
	for(i = 0; i < numero; i++){
       fatorial = ((numero - 1) * numero);
	   printf("\nO fatorial do número %d! é %d ", numero, fatorial);	}
    } 

//Pula linha
printf("\n\n");	
	
//Pause do sistema 	
system("pause");
}
