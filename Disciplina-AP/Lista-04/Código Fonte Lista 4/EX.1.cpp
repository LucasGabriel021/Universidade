//Elabore um algoritmo que, a partir de um dia, m�s e ano fornecidos, valide se eles comp�em
//uma data v�lida. N�o deixe de considerar os meses com 30 ou 31 dias, e o tratamento de ano
//bissexto.

//Bibliotecas
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

//Fun�ao principal
int main(){
	
//Declara�ao de vari�veis	
int dia, mes, ano;	
	
//Entrada das informa��es	
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
		    printf("Informe o m�s:");
		    fflush(stdin);
		    scanf("%d", &mes);
		
		if(mes > 12)
		    printf("\nM�s informado est� invalido\n");
		
		else
		   printf("M�s que voc� digitou esta correto!\n\n");
		
	}while(mes > 12);
	
	       printf("Informe o ano:");
	       scanf("%d", &ano);
	
//Pula linha	
           printf("\n\n");
	
//Pause do programa	
	    system("pause");
	
//Retorno da fun��o	
	return 0;
}
