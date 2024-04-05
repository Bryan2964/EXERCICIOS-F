#include <stdio.h>

int main()
{
    // Variavel
    
    int num;
    
    // Entrada
    
    do{
        printf("Digite um numero entre 1 a 10: ");
        scanf("%d", &num);
        
        if(num < 1 || num > 10){
            printf("Numero invalido!\n");
        }
        
    } while (num < 1 || num > 10);
    
    // Tabuada
    
    printf("Tabuada do %d:\n", num);
    for (int i = 1; i<= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
