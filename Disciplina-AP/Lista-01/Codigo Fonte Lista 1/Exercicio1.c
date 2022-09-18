#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int numeroInt = 0;
 
 	    printf("Informe um número qualquer: ");
 	    fflush(stdin);
 	    scanf("%d", &numeroInt);
 	    
     int minutos = 0, segundos = 0;
     
         minutos = (numeroInt * 60);
         segundos = (numeroInt * 3600);
         
         printf("\n\nO número informado em minutos é %d", minutos);
	    printf("\nO número informado em segundos é %d", segundos);
	    
	return 0;
	
	system("pause");
}
