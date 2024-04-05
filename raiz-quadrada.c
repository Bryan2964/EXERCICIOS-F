#include <stdio.h>
#include <math.h>

int main()
{
    //Var
    
    float num, raiz;
    
    //Entrada
    
    printf("Digite um numero: ");
    scanf("%f", &num);

    //Cauculo e Resultado
        if(num >= 0){
            raiz = sqrt(num);
             printf("Raiz quadrada: %2.f é %.2f", num, raiz);
        }else{
            printf("Não pode ser menor que 0");
        }
    

    return 0;
}
