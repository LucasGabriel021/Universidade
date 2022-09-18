#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
int valor1, valor2, valor3;

	printf("Informe o primeiro número:\n");
	scanf("%d", &valor1);
	printf("Informe o segundo número:\n");
	scanf("%d", &valor2);
	printf("Informe o terceiro número:\n");
	scanf("%d", &valor3);
	
	if ((valor1 > valor2) && (valor1 > valor3))
	    printf("\nO maior número no qual você digitou é: %d\n\n", valor1);
	else if ((valor2 > valor1) && (valor2 > valor3))    
	    printf("\nO maior número no qual você digitou é: %d\n\n", valor2);
	else if ((valor3 > valor1) && (valor3 > valor2))
	    printf("\nO maior número no qual você digitou é: %d\n\n", valor3);
	
	return 0;
}
