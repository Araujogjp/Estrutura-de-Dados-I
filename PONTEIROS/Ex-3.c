/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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

int buscaBinaria(int *v, int n, int elem)
{
    int Inicio, meio, fim;
    Inicio = 0;
    fim = n-1;
    while(Inicio <= fim)
    {
       meio = (Inicio + fim)/2;
       if(v[meio] == elem)
       {
           return meio;
       }
       else
       {
           if(elem <v[meio])
           {
               fim = meio - 1;
           }
           else
           {
               Inicio = meio + 1;
           }
       }
    }
    return -1;
    
}


int buscaBinariaRecursiva(int *v, int inicio, int fim, int elem)
{
    if(inicio > fim)
    {
        return -1;
    }
    int meio = (inicio + fim)/ 2;
    
    if(v[meio] == elem)
    {
        return meio;
    }
    
    if(elem<v[meio])
    {
        buscaBinariaRecursiva(v, inicio, meio - 1, elem);
    }
    else
    {
        buscaBinariaRecursiva(v, meio+1, fim, elem);
    }
}




int main()
{
    
    // int v[7] = {23, 4, 67, -8, 54, 90, 21};
    int v[7] = {-8, 4, 21, 23, 54, 67, 90};
    int vb[10] = {-8, -5, 1, 4, 14, 21, 23, 54, 67, 90};
    printf("Inicio.\n");
    
    int b = 54;
    printf("Busca linear Sequencial: %d \n", buscaSequencial(v, 7, b));
    printf("Busca Binária: %d \n", buscaBinaria(vb, 10, 4));
    
    return 0;
}
