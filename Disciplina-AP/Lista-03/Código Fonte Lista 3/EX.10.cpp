//Fazer um algoritmo que leia n�meros inteiros at� que a quantidade lida seja 100 ou at� que
//seja lido um n�mero negativo e mostrar a quantidade total de n�meros lidos.

//Bibliotecas
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

//Fun��o principal
int main(){
	
//Declara��o das vari�veis
int numero, i, quantidadeNumero;

//Entrada das informa��es	
setlocale(LC_ALL, "Portuguese");	
system("color A");

for(i = 1; i <=100; i++){
printf("Informe um n�mero:");
scanf("%d", &numero);
quantidadeNumero++;

if (numero < 0)
break;
}

printf("Foram informados o total de %d", quantidadeNumero);

//Pula linha
printf("\n\n");
	
//Pause do programa	
system("pause");	
	
//Retorno da fun��o	
return 0;

}
