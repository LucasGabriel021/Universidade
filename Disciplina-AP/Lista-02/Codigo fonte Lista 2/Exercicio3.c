#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int lado1 = 0, lado2 = 0, lado3 = 0;
	
	    printf("Informe o 1� lado do tri�ngulo: ");
	    fflush(stdin);
	    scanf("%d %d %d", &lado1, &lado2, &lado3);
	    
	    if((lado1 < lado2 + lado3) && (lado2 < lado1 + lado3) && (lado3 < lado1 + lado2)) {
		   printf("E poss�vel formar um tri�ngulo");
	    }
	    else {
	        printf("N�o � poss�vel formar um tri�ngulo");
	    }
			
	return 0;
}
