#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(void){
	
int valor, horasdeacesso;

    setlocale(LC_ALL, "Portuguese");
	printf("Informe a quantidade de horas urilizadas com � internet:\n");
	scanf("%d", &horasdeacesso);
	
	if (horasdeacesso == 20)
	    printf("\nVoc� pagar� pelo servi�o utilizado R$ 30,00\n\n");
    else if (horasdeacesso > 20){
    	valor = 30 + (3 * horasdeacesso);
    	printf("\nVoc� ter� um total a pagar: R$ %.2d,00\n\n", valor);
	}

	return 0;
}
