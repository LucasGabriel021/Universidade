//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	
	int valor1, valor2, valor3;
	
    setlocale(LC_ALL, "Portuguese");
	printf("Informe o primeiro valor:\n");
	scanf("%d", &valor1);
	printf("Informe o segundo valor:\n");
	scanf("%d", &valor2);	
	printf("Informe o terceiro valor:\n");
	scanf("%d", &valor3);
	
//Condiçoes
    if ((valor1 < valor2 ) && (valor1 < valor3))
	   printf("\nO menor valor é: %d\n\n", valor1);
	else 
	   if ((valor2 < valor1) && (valor2 < valor3))
	   printf("\nO menor valor é: %d\n\n", valor2);
	else if((valor3 < valor1) && (valor3 < valor2))
	   printf("\nO menor valor é: %d\n\n", valor3);      	
	
	return 0;
}
