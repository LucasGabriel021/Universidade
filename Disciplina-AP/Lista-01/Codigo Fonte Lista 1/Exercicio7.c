#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	char nomeFuncionario[30], sexo;
	int matricula, numeroHrs;
	float valorHrs;
	
	    printf("Informe o nome do funcion�rio: ");
	    fflush(stdin);
	    scanf("%s", &nomeFuncionario);
	    
	    printf("\nInforme o sexo do funcion�rio: ");
	    fflush(stdin);
	    sexo = getchar();
	    
	    printf("\nInforme o n�mero da matricula do funcion�rio: ");
	    fflush(stdin);
	    scanf("%d", &matricula);
	    
	    printf("\nInforme o n�mero de horas trabalhadas: ");
	    fflush(stdin);
	    scanf("%d", &numeroHrs);
	    
	    printf("\nInforme o valor de horas trabalhadas: ");
	    fflush(stdin);
	    scanf("%f", &valorHrs);
	    
     float salario = 0;
     
   	     salario = (numeroHrs * valorHrs);
   	     
   	     printf("\n\nO nome do funcion�rio �: %s", nomeFuncionario);
   	     printf("\nO nome do funcion�rio �: %c", sexo);
   	     printf("\nA matricula do funcion�rio �: %d", matricula);
   	     printf("\nQuantidade de horas trabalhadas � de: %d", numeroHrs);
   	     printf("\nValor de horas trabalhadas � de: %.2f", valorHrs);
   	     printf("\nO sal�rio do funcion�rio � de: %.2f", salario);
   	     
	return 0;
}
