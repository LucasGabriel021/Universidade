#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	char nomeFuncionario[30], sexo;
	int matricula, numeroHrs;
	float valorHrs;
	
	    printf("Informe o nome do funcionário: ");
	    fflush(stdin);
	    scanf("%s", &nomeFuncionario);
	    
	    printf("\nInforme o sexo do funcionário: ");
	    fflush(stdin);
	    sexo = getchar();
	    
	    printf("\nInforme o número da matricula do funcionário: ");
	    fflush(stdin);
	    scanf("%d", &matricula);
	    
	    printf("\nInforme o número de horas trabalhadas: ");
	    fflush(stdin);
	    scanf("%d", &numeroHrs);
	    
	    printf("\nInforme o valor de horas trabalhadas: ");
	    fflush(stdin);
	    scanf("%f", &valorHrs);
	    
     float salario = 0;
     
   	     salario = (numeroHrs * valorHrs);
   	     
   	     printf("\n\nO nome do funcionário é: %s", nomeFuncionario);
   	     printf("\nO nome do funcionário é: %c", sexo);
   	     printf("\nA matricula do funcionário é: %d", matricula);
   	     printf("\nQuantidade de horas trabalhadas é de: %d", numeroHrs);
   	     printf("\nValor de horas trabalhadas é de: %.2f", valorHrs);
   	     printf("\nO salário do funcionário é de: %.2f", salario);
   	     
	return 0;
}
