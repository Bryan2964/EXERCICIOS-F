#include <stdio.h>

int main()
{
    
    //Variaveis
    
    int nota;
    
    //Entrada
    
    printf("Digite sua nota: ");
    scanf("%d", &nota);

    //Saida
    
    if(nota >= 86 && nota <= 100){
        printf("A\n");
    }
    else if(nota >= 61 && nota <= 85){
        printf("B\n");
    }
    else if(nota >= 36 && nota <= 60){
        printf("C\n");
    }
    else if(nota >= 1 && nota <= 35){
        printf("D\n");
    }
    else if(nota >= 0 && nota <= 1){
        printf("E\n");
    }
    else{
        printf("Nota tem que ser entre 0 a 100");
    }
    
        
    
    
}
