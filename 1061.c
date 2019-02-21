#include <stdio.h>
int main(void){
    
    char whatever[20];
    int Total,Inicio,Final;
    int Dia1=0,Horas1=0,Minutos1=0,Segundos1=0;
    int Dia2=0,Horas2=0,Minutos2=0,Segundos2=0;
    int Dia3=0,Horas3=0,Minutos3=0,Segundos3=0;
    
    scanf("%s",whatever);
    scanf("%d",&Dia1);
    scanf("%d",&Horas1);
    scanf("%s",whatever);
    scanf("%d",&Minutos1);
    scanf("%s",whatever);
    scanf("%d",&Segundos1);
    scanf("%s",whatever);
    scanf("%d",&Dia2);
    scanf("%d",&Horas2);
    scanf("%s",whatever);
    scanf("%d",&Minutos2);
    scanf("%s",whatever);
    scanf("%d",&Segundos2);
    
    Inicio = 86400*Dia1 + 3600*Horas1 + 60*Minutos1 + Segundos1;
    
    Final = 86400*Dia2 + 3600*Horas2 + 60*Minutos2 + Segundos2;
    
    Total = Final - Inicio;
    
    while(Total-86400 >= 0){
        Dia3++;
        Total = Total-86400;
    }
    
    while(Total-3600 >= 0){
        Horas3++;
        Total = Total-3600;
    }
    
    while(Total-60 >= 0){
        Minutos3++;
        Total = Total-60;
    }
    
    Segundos3 = Total;
    
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",Dia3,Horas3,Minutos3,Segundos3);
    return 0;
    
}
