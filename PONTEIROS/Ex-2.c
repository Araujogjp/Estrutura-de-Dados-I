#include <stdio.h>

void imprimeVetor(int *x, int n)
{
    printf("Vetor antes: ");
    for(int i = 0; i < 5; i++)
    {
        printf("| %d   ", x[i]);
    }
    
}

int buscaSequencial(int *x, int n, int alvo)
{
    for(int i = 0; i < n; i++)
    {
       if(x[i] == alvo)
       {
          return i;
       }
    }
    return -1;
}

int buscaOrdenadaSequencial(int *x, int n, int alvo)
{
    for(int i = 0; i < n; i++)
    {
       if(x[i] == alvo ) 
       {
          return i;
       }
       else
       {
           if(alvo < x[i])
           {
               return -1;
           }
       }
    }
    return -1;
}

int main()
{
    
    // int v[7] = {23, 4, 67, -8, 54, 90, 21};
    int v[7] = {-8, 4, 21, 23, 54, 67, 90};
    printf("Inicio.\n");
    
    int b = 54;
    printf("Busca linear Sequencial: %d \n", buscaSequencial(v, 7, b));
    
    return 0;
}
