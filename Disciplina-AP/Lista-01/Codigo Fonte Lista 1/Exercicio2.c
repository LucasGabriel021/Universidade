#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int valor = 0;
	
	    printf("Informe algum valor para calcular a �rea do circulo: ");
	    fflush(stdin);
	    scanf("%d", &valor);
	    
     float areaCirculo = 0;
     
         areaCirculo = (3.14 * (valor * valor));
         
         printf("\n\nA �rea da circunfer�ncia � de %.2f", areaCirculo);
	return 0;
}
