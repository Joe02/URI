#include <stdio.h>
int main(void){
    int a,b,i,soma=0;
    scanf("%d %d",&a,&b);
    while(a>=1&&b>=1){
        if(a>b){
            for(i=b;i<=a;i++){
                printf("%d ",i);
                soma+=i;
            }
        }else if(a<b){
            for(i=a;i<=b;i++){
                printf("%d ",i);
                soma+=i;
            }
        }
        printf("Sum=%d\n",soma);
        soma=0;
        scanf("%d %d",&a,&b);
    }
    return 0;
}1
