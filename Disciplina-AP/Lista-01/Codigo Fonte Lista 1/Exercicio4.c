#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL , "Portuguese");
	
	int dividendo = 0, divisor = 0;
	
	    printf("Informe o dividendo e o divisor respectivamente: ");
	    fflush(stdin);
	    scanf("%d %d", &dividendo, &divisor);
	    
     float divisao = 0;
	int resto = 0;
     
         divisao = (dividendo / divisor);
         resto = (dividendo % divisor);
         
         printf("\nA divis�o dos dois n�meros � de %.0f", divisao);
         printf("\nA divis�o dos dois n�meros o resto � %d", resto);
	return 0;
}
