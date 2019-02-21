#include <stdio.h>
#include <math.h>
int main (){
    float a,b,c,delta,R1,R2;
    scanf("%f %f %f",&a,&b,&c);
    delta=(b*b)-(4*a*c);
    if(delta<0||a==0){
        printf("Impossivel calcular\n");
    }else{
        R1=(-b+sqrt(delta))/(a+a);
        R2=(-b-sqrt(delta))/(a+a);
        printf("R1 = %.5lf\n",R1);
        printf("R2 = %.5lf\n",R2);

    }
    return 0;
}
