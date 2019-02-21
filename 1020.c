#include <stdio.h>
int main(){
    int i,a=0,m=0,d=0;
    scanf("%d",&i);
    if(i!=0){
        while(i-365>=0){
            i-=365;
            a++;
        }
        while(i-30>=0){
            i-=30;
            m++;
        }
        while(i-1>=0){
            i-=1;
            d++;
        }
    }
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",a,m,d);
    return 0;
}
