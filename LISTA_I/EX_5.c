#include <stdio.h>

int main()
{
    float a;
    float b;
    float area;
    
    printf("Digite a altura do triângulo: ");
    scanf("%f", &a);
    
    printf("Digite o valor da base do triângulo: ");
    scanf("%f", &b);
    
    area = a * b;
    
    printf("A área do triângulo é: %.2f", area);
    
}
