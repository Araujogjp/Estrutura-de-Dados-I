#include <stdio.h>

int main()
{
    float cubo, aresta;
    
    printf("Digite a aresta do cubo: ");
    scanf("%f", &aresta);
    
    cubo = aresta * aresta * aresta;
    
    printf("Volume do cubo: %.2f", cubo);
    
    return 0;
}
