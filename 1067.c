#include <stdio.h>
int main(){
    int a,i;
    scanf("%d",&a);
    if(a>=1&&a<=1000){
        for(i=1;i<=a;i++){
            if(i%2==0){
            }else{
                printf("%d\n",i);
            }
        }
    }
}
