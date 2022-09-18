#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	float notaA = 0, notaB = 0;
	
		 printf("Informe a nota do aluno respectivamente: ");
		 fflush(stdin);
		 scanf("%f %f", &notaA, &notaB);
		 
     float media = 0;
     
     	 media = ((notaA * 3.5) + (notaB * 7.5)) / 11;
     	 
     	 printf("\n A média do aluno é de %.2f", media);
	return 0;
}
