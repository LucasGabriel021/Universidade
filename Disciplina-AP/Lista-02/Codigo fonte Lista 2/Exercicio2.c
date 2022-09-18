#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int numero = 0;
	
	    printf("Informe algum número qualquer: ");
	    fflush(stdin);
	    scanf("%d", &numero);
	    
	    numero = abs(numero);
	    
	    printf("O valor absoluto do número digitado é %d", numero);
			
	return 0;
}
