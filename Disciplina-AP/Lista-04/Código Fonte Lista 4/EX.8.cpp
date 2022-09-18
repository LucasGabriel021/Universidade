//Anacleto tem 1,50 metro e cresce 2 centímetros por ano, enquanto Felisberto tem 1,10 metro
//e cresce 3 centímetros por ano. Construa um algoritmo que calcule e imprima quantos anos serão
//necessários para que Felisberto seja maior que Anacleto.

//Bibliotecas
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

//Funçao principal
int main()
{
int anos, anacleto, felisberto;
int calculo = 0; 
 
anacleto = 1.50; 
felisberto = 1.10;
	
        setlocale(LC_ALL, "Portuguese");	
        system("color A");
	
            printf("Anacleto tem 1,50 metro e cresce 2 centímetros por ano\n");	
            printf("Felisberto tem 1,10 metro e cresce 3 centímetros por ano.");	
	
    calculo = (150 - 110) / ((2 - 3) * -1);	

           printf("\n\nSerão necessários %d para que Felisberto alcance Anacleto.", calculo);	
	

//Pula linha	
	       printf("\n\n");
	
//Pause do sistema	
	    system("pause");
	
//Retorno da função	
	return 0;
	
}
