#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int valor = 0;
	
	    printf("Informe algum valor para calcular a área do circulo: ");
	    fflush(stdin);
	    scanf("%d", &valor);
	    
     float areaCirculo = 0;
     
         areaCirculo = (3.14 * (valor * valor));
         
         printf("\n\nA área da circunferência é de %.2f", areaCirculo);
	return 0;
}
