#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int valor1 = 0, valor2 = 0;
	
	    printf("Informe o 1° valor: ");
	    fflush(stdin);
	    scanf("%d", &valor1);
	    		
	    printf("\nInforme o 2° valor: ");
	    fflush(stdin);
	    scanf("%d", &valor2);
	    
	    int diferenca;
	    
	    if(valor1 > valor2) {
	    	   diferenca = valor1 - valor2; 	
	    	   printf("\nA diferença entre o maior para o menor é de: %d", diferenca);
	    }
	    else {
	    	    diferenca = valor2 - valor1;
	    	    printf("\nA diferença entre o maior para o menor é de: %d", diferenca);
	    }
	    
	return 0;
}
