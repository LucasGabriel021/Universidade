//Elabore um algoritmo para calcular N! (fatorial de N) sendo que o valor inteiro de N é
//fornecido pelo usuário. Sabe-se que: N! = 1x2x...x N-1 x N e 0! = 1. Use o enquanto...faça.

//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//Função principal
int main(){

//Declaração das variáveis
int fatorial = 0, numero = 0, contador = 0;

//Entrada das informações
setlocale(LC_ALL, "Portuguese");
system("color A");

printf("Informe o número desejado para o cálculo do fatorial:");
fflush(stdin);
scanf("%d", &numero);

//Comando de repetição
while(contador < numero){
	
fatorial =((numero - 1) * numero);

printf("\nO fatorial do número %d! é %d", numero, fatorial);

contador++;
}

//Pula linha
printf("\n\n");

//Pause do programa
system("pause");

//Retorna da função
return 0;

}
