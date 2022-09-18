#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(void){
	
int ano1, ano2, diferenca;
char nome[51];	
	
    setlocale(LC_ALL, "Portuguese");
	printf("Informe seu nome:\n");
	fgets(nome,51,stdin);
	printf("\nInforme o ano que vc nasceu e o ano atual:\n");
	scanf("%d %d", &ano1, &ano2);
	
	diferenca = (ano2 - ano1) * 365;
	
	printf("\nO nome da pessoa informada é: %s", nome);
	printf("\nEle ou ela viveu até hoje: %d dias\n\n", diferenca);	
	
	return 0;
}
