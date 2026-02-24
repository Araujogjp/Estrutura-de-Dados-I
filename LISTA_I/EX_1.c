#include <stdio.h>

int main()
{
    int a;
    int b;
    int temp;
    printf("Digite um número a: ");
    scanf("%d", &a);
    printf("Digite um número b: ");
    scanf("%d", &b);
    temp = a;
    a = b;
    b = temp;
    
    printf("O valor de a é: %d\n", a);
    printf("O valor de b é: %d\n", b);

    return 0;
}
