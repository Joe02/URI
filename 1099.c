#include <stdio.h>
int main(){
    int n,a,b,soma=0,i;
    scanf("%d",&n);
    while(n>0){
        scanf("%d %d",&a,&b);
        if(a>b){
            for(i=b+1;i<a;i++){
                if(i%2!=0){
                    soma+=i;
                }
            }
        }else if(b>a){
            for(i=a+1;i<b;i++){
                if(i%2!=0){
                    soma+=i;
                }
            }
        }
        printf("%d\n",soma);
        soma=0;
        n--;
    }

    return 0;
}S
