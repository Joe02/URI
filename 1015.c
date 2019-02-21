#include <stdio.h>
#include <math.h>
int main(){
    double x1,y1,x2,y2,distancia;
    double a,b;
    scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
    a=x2-x1;
    b=y2-y1;
    distancia =(a*a) + (b*b);
    printf("%.4f\n",sqrt(distancia));
}D
