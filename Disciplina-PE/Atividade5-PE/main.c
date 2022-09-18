#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//2 - Sinalização do Procedimento
void head();

//2 - Sinalização da Função
float calcSoma(float n1, float n2);
char le_valida_operador();

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	//3 - Chamando um Procedimento
	head();
	
	float numero_um = 0, numero_dois = 0;
	char operador;
	printf("-------------------------------------\n");
	
	printf("Informe um número: ");
	fflush(stdin);
	scanf("%f", &numero_um);
	
	printf("Informe qual o tipo da operação: ");
	fflush(stdin);
	operador = le_valida_operador();
	
	printf("Informe outro número: ");
	fflush(stdin);
	scanf("%f", &numero_dois);
	
	printf("-------------------------------------");
	
	float soma = 0, multi = 0, subtracao = 0, divisao = 0;
	switch(operador) {
		case '+': 
			//3 - Chamada da Função em uma variável
			soma = calcSoma(numero_um, numero_dois);
			printf("\nO resultao é: %.1f", soma);
			break;
			
		case '-': 
			subtracao = (numero_um - numero_dois);
			printf("\nO resultao é: %.1f", subtracao);
			break;
			
		case '*':
			multi = (numero_um * numero_dois);
			printf("\nO resultao é: %.1f", multi);
			break;
			
		case '/':
			divisao = (numero_um / numero_dois);
			printf("\nO resultao é: %.1f", divisao);
			break;
			
		default:
			printf("\nOperação invalida!");
	}
	
	printf("\n-------------------------------------\n");
	
	return 0;
}

//1 - Declaração do Procedimento
void head() {
	printf("Atividade 27/04/22\n");
	printf("Atividade calculadora\n");
}

//1 - Declaração da Função
float calcSoma(float n1, float n2) {
	float resultado = (n1 + n2);
	return resultado;
}

char le_valida_operador() {
	char op;
	int count = 0;
	
	do {
		if(count != 0) {
			printf("\nERRO!\n");
		}
		scanf("%c", &op);
		
		count++;
	}while(op != '+' && op != '-' && op != '*' && op != '/');
	
	return op;
}
