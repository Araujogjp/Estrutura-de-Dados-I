#include <stdio.h>

int main()
{
    float prod, desconto, precoF;
    
    printf("Valor do produto: ");
    scanf("%f", &prod);
    
    printf("Valor do desconto: ");
    scanf("%f", &desconto);
    
    precoF = prod - desconto;
    printf("Valor final R$%.2f", precoF);
    
    return 0;
}
