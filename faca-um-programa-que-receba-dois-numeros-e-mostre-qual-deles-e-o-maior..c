#include <stdio.h>

int main()
{

    //Declaração da Var

    int num1, num2, maior;
    
    //Entrada de dados
    
    printf("Primeiro numero:");
    scanf("%i", &num1);
    
    printf("Segundo numero:");
    scanf("%i", &num2);
    
    //If else
    
    if(num1 > num2){
        printf("Numero %.i é maior que numero %.i", num1,num2);
    }
    else if(num2 > num1){
        printf("Numero %.i é maior que numero %.i", num2,num1);
    }
    else{
        printf("Numeros iguais");
    }

    return 0;
}
