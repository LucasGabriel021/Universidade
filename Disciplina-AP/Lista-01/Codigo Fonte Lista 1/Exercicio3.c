#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");

	float notaA = 0, notaB = 0, notaC = 0;
	
	    printf("Informe o as notas dos alunos respectivamente: ");
	    fflush(stdin);
	    scanf("%f %f %f", &notaA, &notaB, &notaC);
	    
     float media = 0;
     
         media = ((notaA + notaB + notaC) / 3);
	    
	    printf("\nA m�dia das notas dos tr�s alunos � %.2f", media); 
	return 0;
}
