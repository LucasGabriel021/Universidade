#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int lado1 = 0, lado2 = 0, lado3 = 0;
	
	    printf("Informe o 1° lado do triângulo: ");
	    fflush(stdin);
	    scanf("%d %d %d", &lado1, &lado2, &lado3);
	    
	    if((lado1 < lado2 + lado3) && (lado2 < lado1 + lado3) && (lado3 < lado1 + lado2)) {
		   printf("E possível formar um triângulo");
	    }
	    else {
	        printf("Não é possível formar um triângulo");
	    }
			
	return 0;
}
