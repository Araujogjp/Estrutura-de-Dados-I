#include <stdio.h>

int main()
{
    // Declara uma variável int contendo o valor
    int c = 10;
    
    // Declara uma ponteiro para int
    int *p = NULL;
    
    // Atribui ao ponteiro o endereco da variável int
    p = &c;
    printf("Conteudo apontado por p: %d\n", *p);
    printf("Conteudo de c: %d\n", c);
    // Atribui um novo valor á posição de memória apontada por p
    *p = 12;
    
    printf("Conteudo apontado por p: %d\n", *p);
    printf("Conteudo de count: %d\n", c);
    
    
    return 0;
}
