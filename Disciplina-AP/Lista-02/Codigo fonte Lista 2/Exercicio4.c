#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	char nome[30], sexo;
	
		printf("Informe o nome da pessoa: ");
		fflush(stdin);
		scanf("%s", &nome);
		
		printf("Informe o sexo da pessoa: ");
		fflush(stdin);
		sexo = getchar();
		
		if(sexo == 'm' || sexo == 'M') {
			printf("Bem vindo de volta Ilmo. Sr.%s", nome);
		}
		else {
			printf("Bem vindo de volta Ilma. Sra.%s", nome);
		}
			
	return 0;
}
