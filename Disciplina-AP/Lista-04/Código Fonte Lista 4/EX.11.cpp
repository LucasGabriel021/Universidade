//Construa um algoritmo que calcule a m�dia aritm�tica de um conjunto de n�meros pares que
//forem fornecidos pelo usu�rio. O valor de finaliza��o ser� a entrada do n�mero 0. Observe que
//nada impede que o usu�rio forne�a quantos n�meros �mpares quiser, com a ressalva de que eles
//n�o poder�o ser acumulados.

//Bibliotecas
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

//Fun�ao principal
int main()
{

//Declara��o de vari�veis	
int numero, soma = 0, media = 0, i = 0;	

//Come�o do c�digo	
setlocale(LC_ALL, "Portuguese");	
system("color A");	
	
do
{
	printf("Informe um n�mero par, ap�s inserir o n�mnero digite '0': ");
	fflush(stdin);
	scanf("%d", &numero);
	
	if((numero % 2 == 0) && numero != 0){
				soma = soma + numero;			
			}
			else{
				i--;
			}
		i++;
	} while(numero != 0);
	 media = soma / i ;
	 printf("A media � %.d", media);

//Pula linha
	printf("\n\n");

//Pause do sistema
	system("pause");
	
//Retorno da fun��o	
	return 0;
}
