#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int valor1 = 0, valor2 = 0;
	
	    printf("Informe o 1� valor: ");
	    fflush(stdin);
	    scanf("%d", &valor1);
	    		
	    printf("\nInforme o 2� valor: ");
	    fflush(stdin);
	    scanf("%d", &valor2);
	    
	    int diferenca;
	    
	    if(valor1 > valor2) {
	    	   diferenca = valor1 - valor2; 	
	    	   printf("\nA diferen�a entre o maior para o menor � de: %d", diferenca);
	    }
	    else {
	    	    diferenca = valor2 - valor1;
	    	    printf("\nA diferen�a entre o maior para o menor � de: %d", diferenca);
	    }
	    
	return 0;
}
