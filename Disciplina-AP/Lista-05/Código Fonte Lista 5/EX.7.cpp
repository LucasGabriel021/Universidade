//Faça um programa que leia três valores numéricos e os mostre em ordem crescente.

//Bibliotecas
#include <ctype.h>
#include <string.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

//Função principal
int main()
{

int numero[3], i, trocar, auxiliar;

setlocale(LC_ALL, "Portuguese");
system("color A");

    for (i = 0; i < 3; i++){
    printf("Informe o número pretendido %d: ", i + 1);
    fflush(stdin);
    scanf("%d", &numero[i]);
}
    
    for (auxiliar = 0; auxiliar < 3; auxiliar++){
    for(i = auxiliar + 1; i < 3; i++){
			if(numero[auxiliar] > numero[i]){
				trocar = numero[i];
				numero[i] = numero[auxiliar];
				numero[auxiliar] = trocar;
			}
    }
}

printf("\nCom os números informados a ordem respectivamente: %d, %d, %d.", numero[0], numero[1], numero[2]);

    printf("\n\n\n");
	system("pause");
	return 0;

}
