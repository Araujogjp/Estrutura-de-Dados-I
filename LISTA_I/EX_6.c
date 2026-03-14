#include <stdio.h>

int main()
{
    int dias;
    int horas;
    int minutos;
    
    int calDia;
    int calHora;
    
    int contagem;
    
    printf("Dias: ");
    scanf("%d", &dias);
    
    printf("Horas: ");
    scanf("%d", &horas);
    
    printf("Minutos: ");
    scanf("%d", &minutos);
    
    
    calDia = (dias * 24) * 60;
    
    calHora = horas * 60;
    
    contagem = calDia + calHora + minutos;
    printf("Total de minutos: %d", contagem);
    
    return 0;
}
