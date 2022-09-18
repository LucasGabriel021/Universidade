#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	float altura;
	char sexo;
	
	      printf("Informe o seu sexo: ");
		 fflush(stdin);
		 sexo = getchar();
	
		 printf("Informe sua altura: ");
		 fflush(stdin);
		 scanf("%f", &altura);
		 
     float peso;
		 
		 if(sexo == 'm' || sexo == 'M') {
		 	peso = (72.5 * altura) - 58;
		 	printf("O peso ideal para o sexo masculino é de %.2f", peso);
		 }
		 else {
		 	peso = (62.1 * altura) - 44.7;
		 	printf("O peso ideal para o sexo feminino é de %.2f", peso);
		 }
	    
	return 0;
}
