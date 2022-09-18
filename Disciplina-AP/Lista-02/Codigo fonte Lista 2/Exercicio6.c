#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int numero = 0;
	
	    printf("Informe um número qualquer: ");
	    fflush(stdin);
	    scanf("%d", &numero);
	    
     int modulo;
     
         modulo = numero % 2;
         
         if(modulo == 0) {
   		    printf("\nO número é par");
	    }
	    else {
	    	    printf("\nO número é impar");
	    }
			
	return 0;
}
