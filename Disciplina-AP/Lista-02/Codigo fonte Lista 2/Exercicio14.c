#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
int valor1, valor2, valor3;

	printf("Informe o primeiro n�mero:\n");
	scanf("%d", &valor1);
	printf("Informe o segundo n�mero:\n");
	scanf("%d", &valor2);
	printf("Informe o terceiro n�mero:\n");
	scanf("%d", &valor3);
	
	if ((valor1 > valor2) && (valor1 > valor3))
	    printf("\nO maior n�mero no qual voc� digitou �: %d\n\n", valor1);
	else if ((valor2 > valor1) && (valor2 > valor3))    
	    printf("\nO maior n�mero no qual voc� digitou �: %d\n\n", valor2);
	else if ((valor3 > valor1) && (valor3 > valor2))
	    printf("\nO maior n�mero no qual voc� digitou �: %d\n\n", valor3);
	
	return 0;
}
