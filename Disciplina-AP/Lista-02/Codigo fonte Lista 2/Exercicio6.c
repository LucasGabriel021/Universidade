#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int numero = 0;
	
	    printf("Informe um n�mero qualquer: ");
	    fflush(stdin);
	    scanf("%d", &numero);
	    
     int modulo;
     
         modulo = numero % 2;
         
         if(modulo == 0) {
   		    printf("\nO n�mero � par");
	    }
	    else {
	    	    printf("\nO n�mero � impar");
	    }
			
	return 0;
}
