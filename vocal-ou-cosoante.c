#include <stdio.h>

int main() {
    
    //var
    char letra;
    
    //entrada da letra
    printf("Digite uma letra: ");
    scanf("%c", &letra);
    
    //vocal ou cosoante
    
    switch(letra){
        case'A':
        case'E':
        case'I':
        case'O':
        case'U':
        printf("Esta letra '%c' é vocal\n", letra);
        break;
        
        default:
        printf("Esta letra '%c' é cosoante", letra);
    }


    return 0;
}
