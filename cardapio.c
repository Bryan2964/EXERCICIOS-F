#include <stdio.h>

int main()
{
    
    //Variavel
    
    int cod, quant;
    float valor, total;
    
    //Cardapio
    printf("CARDAPIO DOS LANCHES\n\n");
    printf("100. Cachorro Quente - R$ 1.20\n");
    printf("101. Bauru Simples - R$ 1.30\n");
    printf("102. Bauru com Ovo - R$ 1.50\n");
    printf("103. Hamburgues - R$ 1.20\n");
    printf("104. Cheesebuger - R$ 1.70\n");
    printf("105. Suco - 2.20\n");
    printf("106. Refrigerante - R$ 1.00\n\n");
    
    //Entrada
    
    printf("Digite o codigo: ");
    scanf("%i", & cod);
    
    printf("Digite a Quantidade: ");
    scanf("%i", &quant);
    
    // Calcular o valor
    
    switch(cod){
        case 100:
        valor = 1.20;
        break;
        case 101:
        valor = 1.30;
        break;
        case 102:
        valor = 1.50;
        break;
        case 103:
        valor = 1.20;
        break;
        case 104:
        valor = 1.70;
        break;
        case 105:
        valor = 1.20;
        break;
        case 106:
        valor = 1.00;
        break;
        
        default:
        printf("Codigo invalido");
    }
    
    total = valor * quant;
    
    
    //Valor total
    
    printf("Valor total: %.2f", total);
    
    return 0;
}
