//Construa um algoritmo que seja capaz de dar a classificação olímpica de 3 países informados.
//Para cada país é informado o nome, a quantidade de medalhas de ouro, prata e bronze. Considere
//que cada medalha de ouro tem peso 3, cada prata tem peso 2 e cada bronze, peso 1.

//Bibliotecas
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

//Funçao principal
int main(){
		
//Declaraçao de variáveis	
char pais1[30], pais2[30], pais3[30];	
int totalOuro1, totalPrata1, totalBronze1;
int totalOuro3, totalPrata3, totalBronze3;
int totalOuro2, totalPrata2, totalBronze2;
int nota1, nota2, nota3;

//Entrdada das informações	
        setlocale(LC_ALL, "Portuguese");	
        system("color A");

                printf("\nInforme o nome do 1º país: ");
                fflush(stdin);
                scanf("%s", &pais1);

                printf("\nQuantas medalhas de ouro, prata e bornze o 1º país teve respectivamente: ");
                fflush(stdin);
                scanf("%d %d %d", &totalOuro1, &totalPrata1, &totalBronze1);

                printf("\nInforme o nome do 2º país: ");
                fflush(stdin);
                scanf("%s", &pais2);

                printf("\nQuantas medalhas de ouro, prata e bornze o 2º país teve respectivamente: ");
                fflush(stdin);
                scanf("%d %d %d", &totalOuro1, &totalPrata1, &totalBronze1);

                printf("\nInforme o nome do 3º país: ");
                fflush(stdin);
                scanf("%s", &pais3);

                printf("\nQuantas medalhas de ouro, prata e bornze o 3º país teve respectivamente: ");
                fflush(stdin);
                scanf("%d %d %d", &totalOuro1, &totalPrata1, &totalBronze1);

            nota1 = ((totalOuro1 * 3) + (totalPrata1 * 2) + totalBronze1);
            nota2 = ((totalOuro2 * 3) + (totalPrata2 * 2) + totalBronze2);
            nota3 = ((totalOuro3 * 3) + (totalPrata3 * 2) + totalBronze3);

        if((nota1 > nota2) && (nota1 > nota3) && (nota2 > nota3)){
                printf("O primeiro país no ranking da Olímpiada é %s com %d pontos", pais1, nota1);
                printf("\nO segundo país no ranking da Olímpiada é %s com %d pontos", pais2, nota2);
                printf("\nO terceiro país no ranking da Olímpiada é %s com %d pontos", pais3, nota3);
        }

        else if ((nota1 > nota2) && (nota1 > nota3) && (nota3 > nota2)){
                printf("O primeiro país no ranking da Olímpiada é %s com %d pontos", pais1, nota1);
                printf("\nO segundo país no ranking da Olímpiada é %s com %d pontos", pais3, nota3);
                printf("\nO terceiro país no ranking da Olímpiada é %s com %d pontos", pais2, nota2);			
        }

        else if ((nota2 > nota1) && (nota2 > nota3) && (nota1 > nota3)){
                printf("O primeiro país no ranking da Olímpiada é %s com %d pontos", pais2, nota2);
                printf("\nO segundo país no ranking da Olímpiada é %s com %d pontos", pais1, nota1);
                printf("\nO terceiro país no ranking da Olímpiada é %s com %d pontos", pais3, nota3);			
        }

        else if ((nota2 > nota2) && (nota2 > nota3) && (nota3 > nota1)){
                printf("O primeiro país no ranking da Olímpiada é %s com %d pontos", pais2, nota2);
                printf("\nO segundo país no ranking da Olímpiada é %s com %d pontos", pais3, nota3);
                printf("\nO terceiro país no ranking da Olímpiada é %s com %d pontos", pais1, nota1);			
        }

        else if ((nota3 > nota2) && (nota3 > nota1) && (nota1 > nota2)){
                printf("O primeiro país no ranking da Olímpiada é %s com %d pontos", pais3, nota3);
                printf("\nO segundo país no ranking da Olímpiada é %s com %d pontos", pais1, nota1);
                printf("\nO terceiro país no ranking da Olímpiada é %s com %d pontos", pais2, nota2);			
        }

//Pula linha
                printf("\n\n");
    
//Pause do sistema    
	    system("pause");
	
//Retorno da função	
	return 0;
}
