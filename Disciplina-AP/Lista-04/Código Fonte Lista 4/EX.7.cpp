//Construa um algoritmo que leia um conjunto de dados contendo altura e sexo (�M� para
//masculino e �F� para feminino) de 50 pessoas e, depois, calcule e escreva:
//A maior e a menor altura do grupo;
//A m�dia de altura das mulheres;

//Bibliotecas
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

//Fun�ao principal
int main()
{
	
//Declara��o das var�veis	
int i = 0, mulheres, menor, altura_m, maior;
char sexo;
double altura, mediaAltura = 0;

//Come�o do c�digo	
setlocale(LC_ALL, "Portuguese");	
system("color A");
	
	for(i = 1; i <= 50; i++)
	{
		        printf("Informe seu sexo em M/F ou m/f: ");
		        fflush(stdin);
		        scanf("%s", &sexo);
		        sexo = toupper(sexo);
		
		        printf("Informe a altura da %d�: ", i);
		        fflush(stdin);
		        scanf("%lf", &altura);
		
	
		if(i == 1){
					menor = altura;
					maior = altura;}
				if(menor > altura)
					menor = altura;
				if(maior < altura)
					maior = altura;
				if((sexo == 'f') || (sexo == 'F')){
					altura_m = altura_m + altura;
					mulheres++;}
	}
	
	mediaAltura = mulheres / 50; 
	
	printf("A m�dia de todas as mulheres � %d", mediaAltura);
    printf("A maior altura � %d ", maior);
    printf("A menor nota � %d ", menor);
    
//Pula linha	
	printf("\n\n");
	
//Pause do sistema	
	system("pause");
	
//Retorno da fun��o	
	return 0;
}
