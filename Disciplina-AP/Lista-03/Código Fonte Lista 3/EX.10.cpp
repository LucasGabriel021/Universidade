//Fazer um algoritmo que leia números inteiros até que a quantidade lida seja 100 ou até que
//seja lido um número negativo e mostrar a quantidade total de números lidos.

//Bibliotecas
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

//Função principal
int main(){
	
//Declaração das variáveis
int numero, i, quantidadeNumero;

//Entrada das informações	
setlocale(LC_ALL, "Portuguese");	
system("color A");

for(i = 1; i <=100; i++){
printf("Informe um número:");
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
	
//Retorno da função	
return 0;

}
