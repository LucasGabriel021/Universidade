//Imagine uma brincadeira entre dois colegas, na qual um pensa um número e o outro deve
//fazer chutes até acertar o número imaginado. Como dica, a cada tentativa é dito se o chute foi alto
//ou foi baixo. Elabore um algoritmo dentro deste contexto, que leia o número imaginado e os
//chutes, ao final mostre quantas tentativas foram necessárias para descobrir o número.

//Bibliotecas
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

//Funçao principal
int main()
{

//Declarações das varáveis	
int numero, chutes = 0, i = 0, chuteNumero = 0;	

//Começo do código	
setlocale(LC_ALL, "Portuguese");	
system("color A");

	
                printf("Informe o número imaginado: ");	
                fflush(stdin);	
                scanf("%d", &numero);	
	
        for (i = 1; i <= numero; i++)
    {

	           printf("Informe o número do amigo: ");
	           fflush(stdin);
	           scanf("%d", &chuteNumero);
	
	    if(chuteNumero == numero)
	           printf("\nVocê acertou o número em %d tentaivas", i);
	
	    else
	           printf("Número incorreto!");
    }
	
//Pula linha	
	printf("\n\n");
	
///Pause do programa	
	system("pause");
	
//Retorno da função	
	return 0;
}

