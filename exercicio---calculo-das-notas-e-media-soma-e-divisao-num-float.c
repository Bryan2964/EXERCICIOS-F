#include <stdio.h>

float main()
{
   
   // Declarção das variaveis
   
   float nota1, nota2, soma, media;
   
   // Entrada de Dados
   
   printf("Primeira Nota:");
   scanf("%f", &nota1);
   
   
   printf("Segunda Nota:");
   scanf("%f", &nota2);
   
   // Processo
   
   soma = ( nota1 + nota2);
   
   media = soma /2;
   
   // Saida de Dados
   
   printf("A soma é: %f\n", soma);
   printf("A media é: %f", media);
   
}

