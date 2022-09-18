//Elabore um algoritmo que apresenta as compras de frutas efetuadas por usuário (quantidade
//de frutas para cada tipo), sendo elas identificadas por meio de um número.
//1 => ABACAXI
//2 => MAÇA
//3 => PERA
//Usando a instrução faca...enquanto identifique quais as frutas desejadas por seu usuário,
//lembrando que ele pode desejar somente um tipo de fruta ou mais que um.
//Deve existir o cuidado na identificação correta das frutas, pois o feirante só possui estes três
//tipos. Caso o usuário escolha uma fruta não existente deve ser notificado que a fruta não está
//disponível e a solicitação deve ser feita novamente sobre qual fruta ele deseja.

//Bibliotecas
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

//Função principal
int main(){
	
//Declaração de variáveis
int fruta, quantidadeFruta, abacaxi = 0, maca = 0, pera = 0, i = 0;	
	
//Entrada dos dados
setlocale(LC_ALL, "Portuguese");	
system("color A");	

printf(">---------------------------------------------------------<\n");
printf("\nEscolha as opções abaixo:\n\n");
printf("1 => ABACAXI\n");
printf("2 => MAÇA\n");
printf("3 => PERA\n");
printf("\n>---------------------------------------------------------<\n");
	
	printf("\nQuais frutas o senhor(a), deseja comprar?");
	fflush(stdin);
	scanf("%d", &quantidadeFruta);

for(i = 1; i <= quantidadeFruta; i++){
do{
	printf("\nInforme qual fruta você comprou:");
	fflush(stdin);
	scanf("%d", &fruta);
	
	if ((fruta != 1)	&& (fruta != 2) && (fruta != 3))
	printf("Dados invalidos! Tente novamente.");
	
	if(fruta == 1)
	abacaxi++;
	
	else if(fruta == 2)
	maca++;
	
	else if(fruta == 3)
	pera++;
	
}while((fruta != 1)	&& (fruta != 2) && (fruta != 3));
}

	printf("\nTotal de frutas do tipo abacaxi foi %d", abacaxi);
	printf("\nTotal de frutas do tipo maça foi %d", maca);
	printf("\nTotal de frutas do tipo pera foi %d", pera);

//Pula linha
printf("\n\n");
	
//Pause do programa	
system("pause");	
	
//Retorno da Função 	
return 0;	
}
