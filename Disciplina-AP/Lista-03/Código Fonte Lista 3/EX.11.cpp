//Voc� foi escolhido para fazer um algoritmo para informar o vencedor de um concurso de
//piadas. Estar�o concorrendo ao pr�mio 3 finalistas, cujos nomes ser�o fornecidos. A
//quantidade de ju�zes ser� definida no dia da apura��o e para cada juiz o algoritmo solicitar� a
//nota para cada candidato. A nota poder� variar de 0 (zero) a 100(cem). O algoritmo dever�
//apresentar o nome e o total de pontos de cada concorrente e o nome e total de pontos do
//vencedor ap�s o voto de todos os ju�zes.

//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//Fun��o principal
int main(){
	
//Declara��o de vari�veis	
char vencedor, finalista1[40], finalista2[40], finalista3[40], juizes[40];
int nota, quantidadeJuizes = 0, i = 0;	
	
//Entrada de informa��es	
setlocale(LC_ALL, "Portuguese");
system("color A");

printf("Informe o nome do primeiro finalista:");	
fflush(stdin);	
gets(finalista1);	
	
printf("Informe o nome do segundo finalista:");	
fflush(stdin);	
gets(finalista2);	
	
printf("Informe o nome do terceiro finalista:");	
fflush(stdin);	
gets(finalista3);	
	
printf("\nQuantos juizes participaram da vota��o?");	
fflush(stdin);
scanf("%d", &quantidadeJuizes);

for(i = 1; i <= quantidadeJuizes; i++){
	printf("\nQual o nome do %d� juiz?", i);
	fflush(stdin);
	gets(juizes);
	
	printf("A nota de 0 a 100, qual a nota do juiz %d� ?", i);
	fflush(stdin);
	scanf("%d", &nota);
	
}






	
//Pula linha	
printf("\n\n");	
	
//Pause do programa	
system("pause");	
	
//Retorno da fun��o	
return 0;	
	
}
