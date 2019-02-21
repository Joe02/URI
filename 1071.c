#include <stdio.h>
int main(void){
    int a,b,soma=0;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a>b){
        for(b=b+1;b<a;b++){
        
            if(b%2==-1||b%2==1){
                soma+=b;
            }
        }
    }
    if(a<b){
        for(a=a+1;a<b;a++){
        
            if(a%2==-1||a%2==1){
                soma+=a;
            }
        }
    }
    printf("%d\n",soma);
}
