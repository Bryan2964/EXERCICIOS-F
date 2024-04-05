#include <stdio.h>

int main()
{
   
   // Declarção das variaveis
   
   float nota1, nota2, media;
   
   
   // Entrada de Dados
   
   printf("Primeira Nota:");
   scanf("%f", &nota1);
   
   if (nota1 < 0.0 || nota1 > 10.0) {
       printf("Nota invalida¹ Insira um valor entre 0.0 e 10.0\n");
       return 1;
   }
   
   
   printf("Segunda Nota:");
   scanf("%f,", &nota2);
   
   if (nota2 < 0.0 || nota2 > 10.0) {
       printf("Nota invalida¹ Insira um valor entre 0.0 e 10.0\n");
       return 1;
   }
   
   
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
