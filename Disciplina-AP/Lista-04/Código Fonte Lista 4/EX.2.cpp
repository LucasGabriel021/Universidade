//Elabore um algoritmo que escreva o signo do zod�aco correspondente ao dia e m�s informado

//Bibliotecas
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

//Fun�ao principal
int main(){
		
//Declara�ao de vari�veis	
int mes, dia;	

//Entrada das informa��es	
    setlocale(LC_ALL, "Portuguese");	
    system("color A");
	
	            printf("Informe o dia de seu nascimento:");
	            fflush(stdin);
	            scanf("%d", &dia);
	
	            printf("Informe o m�s de seu nascimento:");
	            fflush(stdin);
	            scanf("%d", &mes);
	
	    if ((dia >= 21 && mes == 3) || (dia <= 19 && mes == 4))
	            printf("\nO signo � �ries");
	
	    else if ((dia >= 20 && mes == 4) || (dia <= 20 && mes == 5))
	            printf("\nO signo � Touro");
	
	    else if ((dia >= 21 && mes == 5) || (dia <= 20 && mes == 6))
	            printf("\nO signo � G�meos");
	
	    else if ((dia >= 21 && mes == 6) || (dia <= 22 && mes == 7))
	            printf("\nO signo � C�ncer");
	
	    else if ((dia >= 23 && mes == 7) || (dia <= 22 && mes == 8))
	            printf("\nO signo � Le�o");
	
	    else if ((dia >= 23 && mes == 8) || (dia <= 22 && mes == 9))
	            printf("\nO signo � Virgem");
	
	    else if ((dia >= 23 && mes == 9) || (dia <= 22 && mes == 10))
	            printf("\nO signo � Libra");
	
	    else if ((dia >= 23 && mes == 10) || (dia <= 21 && mes == 11))
	            printf("\nO signo � Escorpi�o");
	
	    else if ((dia >= 22 && mes == 11) || (dia <= 21 && mes == 12))
	            printf("\nO signo � Sagit�rio");
	
	    else if ((dia >= 22 && mes == 12) || (dia <= 19 && mes == 1))
	            printf("\nO signo � Capric�rnio");
	
	    else if ((dia >= 20 && mes == 1) || (dia <= 18 && mes == 2))
	            printf("\nO signo � Touro");

//Pula linha	
	            printf("\n\n");
	
//Pause do programa	
	        system("pause");
	
//Retorno da fun��o	
	return 0;
}
