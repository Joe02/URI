#include <stdio.h>
int main(){
    int d;
    double l;
    scanf("%d %lf",&d,&l);
    printf("%.3f km/l\n",(d/l));
    return 0;
}
