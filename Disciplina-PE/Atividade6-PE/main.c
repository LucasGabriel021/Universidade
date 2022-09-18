#include <stdio.h> 
#include <stdlib.h> 
#include <locale.h> 
#include <string.h> 

int main(void) { 
     setlocale(LC_ALL, "Portuguese"); 
     printf("Data: 18/05/2022\n"); 
     printf("Primeira Atividade Utilizando STRUCT!\n"); 
     printf("----------------------------------------------\n\n"); 
     
     struct Estudante { 
          char nome_estudante[100]; 
          int matricula_estudante;
          float notas[4]; 
          float media; 
     };  
      
     int qt_estudantes, contador_estudantes, contador_notas; 
     float media_notas_aluno = 0, soma_notas_aluno = 0; 
     
     printf("Informe a quantidade de estudantes da turma: "); 
     fflush(stdin); 
     scanf("%d", &qt_estudantes); 
     
     struct Estudante aluno[qt_estudantes]; 
     
     for(contador_estudantes = 0; contador_estudantes < qt_estudantes; contador_estudantes++) { 
          printf("\n\nInforme o nome completo do %d° aluno: ", contador_estudantes + 1); 
          fflush(stdin); 
          scanf("%s", &aluno[contador_estudantes].nome_estudante); 
     
          printf("Informe a matrícula do %d° aluno: ", contador_estudantes + 1); 
          fflush(stdin); 
          scanf("%d", &aluno[contador_estudantes].matricula_estudante); 
     
          for(contador_notas = 0; contador_notas < 4; contador_notas++) { 
               printf("Informe a %d° nota: ", contador_notas + 1); 
               fflush(stdin); 
               scanf("%f", &aluno[contador_estudantes].notas[contador_notas]); 
     
               soma_notas_aluno += aluno[contador_estudantes].notas[contador_notas]; 
     
          } 
     
          media_notas_aluno = soma_notas_aluno / 4;  
     
          printf("\n\nO nome do aluno é %s", aluno[contador_estudantes].nome_estudante); 
          printf("\nA matrícula do aluno é %d", aluno[contador_estudantes].matricula_estudante); 
          printf("\nA média das notas é %.1f", media_notas_aluno); 
     
          for(contador_notas = 0; contador_notas < 4; contador_notas++) { 
               printf("\nA nota é %.1f", aluno[contador_estudantes].notas[contador_notas]); 
          }
     
     } 
     
     printf("\n\n----------------------------------------------\n\n"); 
     
     return 0; 
     
} 
