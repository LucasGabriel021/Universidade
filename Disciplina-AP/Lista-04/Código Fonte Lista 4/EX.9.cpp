//Imagine uma brincadeira entre dois colegas, na qual um pensa um n�mero e o outro deve
//fazer chutes at� acertar o n�mero imaginado. Como dica, a cada tentativa � dito se o chute foi alto
//ou foi baixo. Elabore um algoritmo dentro deste contexto, que leia o n�mero imaginado e os
//chutes, ao final mostre quantas tentativas foram necess�rias para descobrir o n�mero.

//Bibliotecas
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

//Fun�ao principal
int main()
{

//Declara��es das var�veis	
int numero, chutes = 0, i = 0, chuteNumero = 0;	

//Come�o do c�digo	
setlocale(LC_ALL, "Portuguese");	
system("color A");

	
                printf("Informe o n�mero imaginado: ");	
                fflush(stdin);	
                scanf("%d", &numero);	
	
        for (i = 1; i <= numero; i++)
    {

	           printf("Informe o n�mero do amigo: ");
	           fflush(stdin);
	           scanf("%d", &chuteNumero);
	
	    if(chuteNumero == numero)
	           printf("\nVoc� acertou o n�mero em %d tentaivas", i);
	
	    else
	           printf("N�mero incorreto!");
    }
	
//Pula linha	
	printf("\n\n");
	
///Pause do programa	
	system("pause");
	
//Retorno da fun��o	
	return 0;
}

