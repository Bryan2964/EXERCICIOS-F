#include <stdio.h>

int main()
{
   
   // Declarção das variaveis
   
   int nota1, nota2, soma, media;
   
   // Entrada de Dados
   
   printf("Primeira Nota:");
   scanf("%d", &nota1);
   
   
   printf("Segunda Nota:");
   scanf("%d,", &nota2);
   
   // Processo
   
   soma = ( nota1 + nota2);
   
   media = soma /2;
   
   // Saida de Dados
   
   printf("A soma é: %d\n\n", soma);
   printf("A media é: %d\n\n", media);
   
   if ( media >= 6){
       printf("Aluno aprovado");
   }
   else{ // media <= 6
        printf("Aluno Reprovado");
       
   }
   
   return 0;
}
