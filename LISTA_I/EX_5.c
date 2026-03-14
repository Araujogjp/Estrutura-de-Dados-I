#include <stdio.h>

int main()
{
    float a;
    float b;
    float area;
    
    printf("Digite a altura do retângulo: ");
    scanf("%f", &a);
    
    printf("Digite o valor da base do retângulo: ");
    scanf("%f", &b);
    
    area = a * b;
    
    printf("A área do retângulo é: %.2f", area);
    
}
