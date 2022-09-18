#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int metrosFios = 0;
	
	    printf("Informe a quantidade de metros que deseja adquirir: ");
	    fflush(stdin);
	    scanf("%d", &metrosFios);
	    
     int rolo = 0, fiosAvulsos = 0;
     
         rolo = (metrosFios / 50);
         fiosAvulsos = (metrosFios - (rolo * 50));
         
         printf("Vão ser necessários %d rolos e %d metros de fio", rolo, fiosAvulsos);
	    
	return 0;
}
