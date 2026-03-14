#include <stdio.h>

int main()
{
    int n;
    int ant;
    int sucessor;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    
    ant = n - 1;
    sucessor = n + 1;
    printf("Número: %d\n", n);
    
    printf("Antecessor: %d\n", ant);
    
    printf("Sucessor: %d", sucessor);
}
