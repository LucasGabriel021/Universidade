#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){

char nome1[51], nome2[51], nome3[51];
double altura1, altura2, altura3;

    setlocale(LC_ALL, "Portuguese");
    printf("Informe seu nome completo:\n");
    fgets(nome1,51,stdin);
    printf("Informe à altura da primeira pessoa:\n");
    scanf("%lf", &altura1); // Substitua %lf por %f 
    printf("\nInforme seu nome completo:\n");
    fflush(stdin);                                             
    fgets(nome2,51,stdin); 
    printf("Informe à altura da segunda pessoa:\n");
    scanf("%lf", &altura2);
    fflush(stdin);
    printf("\nInforme seu nome completo:\n");
    fgets(nome3,51,stdin);
    printf("Informe à altura da terceira pessoa:\n");
    scanf("%lf", &altura3);

    if ((altura1 < altura2) && (altura1 < altura3)){
       printf("\nO nome da pessoa de menor altura é: %s", nome1);
       printf("A altura é: %.2lf\n\n", altura1);}
    else if ((altura2 < altura1) && (altura2 < altura3)){
       printf("\nO nome da pessoa de menor altura é: %s", nome2);
       printf("A altura é: %.2lf\n\n", altura2);}
    else if ((altura3 < altura2) && (altura3 < altura1)){
       printf("\nO nome da pessoa de menor altura é: %s", nome3);
       printf("A altura é: %.2lf\n\n", altura3);}

    return 0;
}
