//Sendo H = 1/1+1/2+1/3+ ... +1/N. Prepare um algoritmo para calcular H sendo N fornecido
//pelo usu�rio.

//Bibliotecas
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//Fun��o principal
int main(){
	setlocale(LC_ALL, "Portuguese");
    system("color A");
    
//Declara��o de vari�veis    
double h = 0, n = 0, i = 1;

	printf("Digite o valor de |N|: ");
	fflush(stdin);
	scanf("%lf",&n);

		for(i = 1; i <= n; i++){
			h = h + (1/i);
		}
	printf("\nResultado: %.2f\n",h);
	

//Pula linha
printf("\n\n");
	
//Pause do programa	
system("pause");

//Retorno da fun��o
	return 0;
}
