#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int numero = 0;
	
	    printf("Informe algum n�mero qualquer: ");
	    fflush(stdin);
	    scanf("%d", &numero);
	    
	    numero = abs(numero);
	    
	    printf("O valor absoluto do n�mero digitado � %d", numero);
			
	return 0;
}
