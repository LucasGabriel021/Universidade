//Você foi escolhido para fazer um algoritmo para informar o vencedor de um concurso de
//piadas. Estarão concorrendo ao prêmio 3 finalistas, cujos nomes serão fornecidos. A
//quantidade de juízes será definida no dia da apuração e para cada juiz o algoritmo solicitará a
//nota para cada candidato. A nota poderá variar de 0 (zero) a 100(cem). O algoritmo deverá
//apresentar o nome e o total de pontos de cada concorrente e o nome e total de pontos do
//vencedor após o voto de todos os juízes.

//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//Função principal
int main(){
	
//Declaração de variáveis	
char vencedor, finalista1[40], finalista2[40], finalista3[40], juizes[40];
int nota, quantidadeJuizes = 0, i = 0;	
	
//Entrada de informações	
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
	
printf("\nQuantos juizes participaram da votação?");	
fflush(stdin);
scanf("%d", &quantidadeJuizes);

for(i = 1; i <= quantidadeJuizes; i++){
	printf("\nQual o nome do %dº juiz?", i);
	fflush(stdin);
	gets(juizes);
	
	printf("A nota de 0 a 100, qual a nota do juiz %dº ?", i);
	fflush(stdin);
	scanf("%d", &nota);
	
}






	
//Pula linha	
printf("\n\n");	
	
//Pause do programa	
system("pause");	
	
//Retorno da função	
return 0;	
	
}
