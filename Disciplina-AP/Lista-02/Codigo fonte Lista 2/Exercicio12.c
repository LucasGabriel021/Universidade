#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int ddd;

	    printf("Informe o DDD utilizado em sua regi�o:\n");
	    fflush(stdin);
	    scanf("%d", &ddd);
	
	    if (ddd == 61)
  	    	  printf("\nEsse DDD pertence � cidade de Bras�lia!\n\n");
         else if (ddd == 71)
	   	  printf("\nEsse DDD pertence � cidade de Salvador!\n\n");
         else if (ddd == 11)
	   	  printf("\nEsse DDD pertence � cidade de S�o Paulo!\n\n");
         else if (ddd == 21)
	    	  printf("\nEsse DDD pertence � cidade de Rio de Janeiro!\n\n");
	    else if (ddd == 32)
	   	   printf("\nEsse DDD pertence � cidade de Juiz de Fora!\n\n");         
	    else if (ddd == 19)
	    	   printf("\nEsse DDD pertence � cidade de Campinas!\n\n");
	    else if (ddd == 27)
	    	   printf("\nEsse DDD pertence � cidade de Vit�ria!\n\n");
	    else if (ddd == 31)
	   	   printf("\nEsse DDD pertence � cidade de Belo Horizonte!\n\n"); 
	     
	return 0;
}
