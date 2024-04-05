#include <stdio.h>

int main() {
    // Variavel
    int mes;
    
    // Meses
    printf("1. Janeiro\n");
    printf("2. Fevereiro\n");
    printf("3. Março\n");
    printf("4. Abril\n");
    printf("5. Maio\n");
    printf("6. Junho\n");
    printf("7. Julho\n");
    printf("8. Agosto\n");
    printf("9. Setembro\n");
    printf("10. Outubro\n");
    printf("11. Novembro\n");
    printf("12. Dezembro\n\n");
    
    printf("digite numero do mes: ");
    scanf("%i", &mes);
    
    //meses
    switch(mes){
        case 1:
        printf("Janeio tem 31 dias");
        break;
        case 2:
        printf("Fevereiro tem 28 dias");
        break;
        case 3:
        printf("Março tem 31 dias");
        break;
        case 4:
        printf("Abril tem 30 dias");
        break;
        case 5:
        printf("Maio tem 31 dias");
        break;
        case 6:
        printf("Junho tem 30 dias");
        break;
        case 7:
        printf("Julho tem 31 dias");
        break;
        case 8:
        printf("Agosto tem 31 dias");
        break;
        case 9:
        printf("Setembro tem 30 dias");
        break;
        case 10:
        printf("Outubro tem 31 dias");
        break;
        case 11:
        printf("Novembro tem 30 dias");
        break;
        case 12:
        printf("Dezembro 31 dias");
        break;
        
        default:
        printf("Não deste mes nao existe");
    }
   

    return 0;
}