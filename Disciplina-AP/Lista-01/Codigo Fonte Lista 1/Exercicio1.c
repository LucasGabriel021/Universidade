#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int numeroInt = 0;
 
 	    printf("Informe um n�mero qualquer: ");
 	    fflush(stdin);
 	    scanf("%d", &numeroInt);
 	    
     int minutos = 0, segundos = 0;
     
         minutos = (numeroInt * 60);
         segundos = (numeroInt * 3600);
         
         printf("\n\nO n�mero informado em minutos � %d", minutos);
	    printf("\nO n�mero informado em segundos � %d", segundos);
	    
	return 0;
	
	system("pause");
}
