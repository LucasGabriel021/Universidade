//Elabore um algoritmo que escreva o signo do zodíaco correspondente ao dia e mês informado

//Bibliotecas
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

//Funçao principal
int main(){
		
//Declaraçao de variáveis	
int mes, dia;	

//Entrada das informações	
    setlocale(LC_ALL, "Portuguese");	
    system("color A");
	
	            printf("Informe o dia de seu nascimento:");
	            fflush(stdin);
	            scanf("%d", &dia);
	
	            printf("Informe o mês de seu nascimento:");
	            fflush(stdin);
	            scanf("%d", &mes);
	
	    if ((dia >= 21 && mes == 3) || (dia <= 19 && mes == 4))
	            printf("\nO signo é Áries");
	
	    else if ((dia >= 20 && mes == 4) || (dia <= 20 && mes == 5))
	            printf("\nO signo é Touro");
	
	    else if ((dia >= 21 && mes == 5) || (dia <= 20 && mes == 6))
	            printf("\nO signo é Gêmeos");
	
	    else if ((dia >= 21 && mes == 6) || (dia <= 22 && mes == 7))
	            printf("\nO signo é Câncer");
	
	    else if ((dia >= 23 && mes == 7) || (dia <= 22 && mes == 8))
	            printf("\nO signo é Leão");
	
	    else if ((dia >= 23 && mes == 8) || (dia <= 22 && mes == 9))
	            printf("\nO signo é Virgem");
	
	    else if ((dia >= 23 && mes == 9) || (dia <= 22 && mes == 10))
	            printf("\nO signo é Libra");
	
	    else if ((dia >= 23 && mes == 10) || (dia <= 21 && mes == 11))
	            printf("\nO signo é Escorpião");
	
	    else if ((dia >= 22 && mes == 11) || (dia <= 21 && mes == 12))
	            printf("\nO signo é Sagitário");
	
	    else if ((dia >= 22 && mes == 12) || (dia <= 19 && mes == 1))
	            printf("\nO signo é Capricórnio");
	
	    else if ((dia >= 20 && mes == 1) || (dia <= 18 && mes == 2))
	            printf("\nO signo é Touro");

//Pula linha	
	            printf("\n\n");
	
//Pause do programa	
	        system("pause");
	
//Retorno da função	
	return 0;
}
