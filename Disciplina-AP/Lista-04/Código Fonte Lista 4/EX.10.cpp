//Construa um algoritmo que permita fazer um levantamento do estoque de vinhos de uma
//adega, tendo como dados de entrada tipos de vinho, sendo: �T� para tinto, �B� para branco e �R� 
//para ros�. Especifique a porcentagem de cada tipo sobre o total geral de vinhos; a quantidade de
//vinhos � desconhecida, utilize como finalizador �F� de fim.

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
int i = 0, total = 0, totalT = 0, totalB = 0, totalR = 0, porcentagemT, porcentagemB, porcentagemR;
char vinho;

//Come�o do c�digo
setlocale(LC_ALL, "Portuguese");	
system("color A");

printf("Vinho Tinto informe 'T'.");
printf("\nVinho Branco informe 'B'.");
printf("\nVinho Ros� informe 'R'.");

printf("\n\nInforme quantos vinhos s�o no total: ");
fflush(stdin);
scanf("%d", &total);

for (i = 1; i <= total; i++)
{
printf("\nInforme qual o tipo do vinho: ");
fflush(stdin);
scanf("%s", &vinho);

if (vinho == 'T')
totalT++;

else if (vinho == 'B')
totalB++;

else if (vinho == 'R')
totalR++;

porcentagemT = totalT * 100;
porcentagemB = totalB * 100;
porcentagemR = totalR * 100;

}
    printf("\nNo dep�sito h� %d% de vinhos do tipo Tinto.", porcentagemT);
    printf("\nNo dep�sito h� %d% de vinhos do tipo Branco.", porcentagemB);
    printf("\nNo dep�sito h� %d% de vinhos do tipo Ros�.", porcentagemR);
    
//Pula linha
    printf("\n\n");

//Pause do programa
	system("pause");

//Retorno da fun��o
	return 0;
}
