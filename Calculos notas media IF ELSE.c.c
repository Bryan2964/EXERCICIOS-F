#include <stdio.h>

int main()
{
   
   // Declarção das variaveis
   
   float nota1, nota2, media;
   
   
   // Entrada de Dados
   
   printf("Primeira Nota:");
   scanf("%f", &nota1);
   
   
   printf("Segunda Nota:");
   scanf("%f,", &nota2);
   
   
   // Processo
   
   media = ( nota1 + nota2) /2 ;
   
   
   // Saida de Dados

   printf("A media é: %.2f\n", media);
   
   
   //if / if else / else
   
   if(media >= 7){
       printf("Aprovado");
   } 
   
   else if ( media >= 4 && media <7){
       printf("Recuperação");
   }
   
    else{
        printf("Reprovado");
        
    }   
   
   return 0;
   
}
