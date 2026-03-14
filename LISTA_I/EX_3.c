#include <stdio.h>

int main()
{
    float reais;
    float cotacao;
    float dolar;
    
    printf("Digite o valor em reais: ");
    scanf("%f", &reais);
    
    printf("Digite a cotacao do dólar: ");
    scanf("%f", &cotacao);
    
    dolar = reais/cotacao;
    
    printf("O valor convertido fica: %.2f dolares", dolar);
}
