//Construa um algoritmo que calcule o fatorial de um n�mero usando a estrutura PARA...FA�A,
//baseando-se na defini��o matem�tica (N! = 1x2x3x...x N-1 x N e 0! = 1 por defini��o)

//Biblioecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//Fun�ao principal
int main()
{

//Declara�ao das variaveis
int numero, fatorial,  i;	
	
//Acentua��o das palavras
setlocale(LC_ALL, "Portuguese");
system("color A");
	
//Entrada dos dados
	    printf("Informe o n�mero a seguir para o c�lculo do fatorial:");
	    fflush(stdin);
	    scanf("%d", &numero);
	
	if((numero == 0) || (numero == 1))
	    printf("\nO fatorial do n�mero %d! � 1 ", numero);
	
	else if((numero != 0) || (numero != 1)){    
	for(i = 0; i < numero; i++){
       fatorial = ((numero - 1) * numero);
	   printf("\nO fatorial do n�mero %d! � %d ", numero, fatorial);	}
    } 

//Pula linha
printf("\n\n");	
	
//Pause do sistema 	
system("pause");
}
