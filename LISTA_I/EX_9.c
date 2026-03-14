#include <stdio.h>

int main()
{
   int n, centena, dezena, unidade;
   
   printf("Digite um número: ");
   scanf("%d", &n);
   
   centena = n / 100;
   
   dezena = (n % 100) / 10;
   
   unidade = n % 10;
   
   printf("Centena: %d\n", centena);
   printf("Dezena:  %d\n", dezena);
   printf("Unidade: %d\n", unidade);
   
   return 0;
}
