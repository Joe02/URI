#include <stdio.h>
int main(){
    int n,hrs=0,min=0,seg=0;
    scanf("%d",&n);
    while(n-3600>-1){
        hrs++;
        n-=3600;
    }while(n-60>-1){
        min++;
        n-=60;
    }
    while(n-1>-1){
        seg++;
        n--;
    }
    printf("%d:%d:%d\n",hrs,min,seg);
    return 0;
}
