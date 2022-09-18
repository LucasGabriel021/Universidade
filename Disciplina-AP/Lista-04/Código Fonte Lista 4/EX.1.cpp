//Elabore um algoritmo que, a partir de um dia, mês e ano fornecidos, valide se eles compõem
//uma data válida. Não deixe de considerar os meses com 30 ou 31 dias, e o tratamento de ano
//bissexto.

//Bibliotecas
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

//Funçao principal
int main(){
	
//Declaraçao de variáveis	
int dia, mes, ano;	
	
//Entrada das informações	
setlocale(LC_ALL, "Portuguese");	
system("color A");	
	
	do{
		    printf("Informe o dia:");
		    fflush(stdin);
		    scanf("%d", &dia);
		
		if (dia > 31)
		    printf("\nDia invalido!\n");
		
		else
		    printf("Dia valido!\n\n");
		
	}while(dia > 31);
	
	do{
		    printf("Informe o mês:");
		    fflush(stdin);
		    scanf("%d", &mes);
		
		if(mes > 12)
		    printf("\nMês informado está invalido\n");
		
		else
		   printf("Mês que você digitou esta correto!\n\n");
		
	}while(mes > 12);
	
	       printf("Informe o ano:");
	       scanf("%d", &ano);
	
//Pula linha	
           printf("\n\n");
	
//Pause do programa	
	    system("pause");
	
//Retorno da função	
	return 0;
}
