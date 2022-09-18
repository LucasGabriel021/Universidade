//Construa um algoritmo que permita fazer um levantamento do estoque de vinhos de uma
//adega, tendo como dados de entrada tipos de vinho, sendo: ‘T’ para tinto, ‘B’ para branco e ‘R’ 
//para rosê. Especifique a porcentagem de cada tipo sobre o total geral de vinhos; a quantidade de
//vinhos é desconhecida, utilize como finalizador ‘F’ de fim.

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
int i = 0, total = 0, totalT = 0, totalB = 0, totalR = 0, porcentagemT, porcentagemB, porcentagemR;
char vinho;

//Começo do código
setlocale(LC_ALL, "Portuguese");	
system("color A");

printf("Vinho Tinto informe 'T'.");
printf("\nVinho Branco informe 'B'.");
printf("\nVinho Rosê informe 'R'.");

printf("\n\nInforme quantos vinhos são no total: ");
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
    printf("\nNo depósito há %d% de vinhos do tipo Tinto.", porcentagemT);
    printf("\nNo depósito há %d% de vinhos do tipo Branco.", porcentagemB);
    printf("\nNo depósito há %d% de vinhos do tipo Rosê.", porcentagemR);
    
//Pula linha
    printf("\n\n");

//Pause do programa
	system("pause");

//Retorno da função
	return 0;
}
