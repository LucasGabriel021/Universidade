//Construa um algoritmo que calcule a média aritmética de um conjunto de números pares que
//forem fornecidos pelo usuário. O valor de finalização será a entrada do número 0. Observe que
//nada impede que o usuário forneça quantos números ímpares quiser, com a ressalva de que eles
//não poderão ser acumulados.

//Bibliotecas
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

//Funçao principal
int main()
{

//Declaração de variáveis	
int numero, soma = 0, media = 0, i = 0;	

//Começo do código	
setlocale(LC_ALL, "Portuguese");	
system("color A");	
	
do
{
	printf("Informe um número par, após inserir o númnero digite '0': ");
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
	 printf("A media é %.d", media);

//Pula linha
	printf("\n\n");

//Pause do sistema
	system("pause");
	
//Retorno da função	
	return 0;
}
