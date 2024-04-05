#include <stdio.h>

int main()
{
    // Declarações das Variaveis
    
    int idade, tempo;
    
    // Entradad de Dados
    
    printf("VAMOS VERIFICAR SE VOCÊ PODE OU NÃO SE APOSENTAR\n\n");
    
    printf("Quantos anos você tem: ");
    scanf("%d", &idade);
    if(idade < 1 || idade >100) {
        printf("Houve um erro. Sua idade tem que ser entre 1 a 100 anos\n");
        return 1; // Encerra o programa em caso de erro
    }
    
    printf("Quanto Tempo de serviço: ");
    scanf("%d", &tempo);
    
    // Condições
    
     if (idade >= 65 || tempo >= 30 || (idade >= 60 && tempo >= 25)) {
        printf("Você pode se aposentar.\n");
    } else {
        printf("Você ainda não pode se aposentar.\n");
    }

    return 0;
    
}
