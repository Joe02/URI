#include <stdio.h>
int main(){
    int a,i;
    scanf("%d",&a);
    if(a%2==0){
        a+1;
        for(i=1;i<=11;i++,i++){
            printf("%d\n",(a+i));
        }
    }else if(a%2==1){
        for(i=1;i<=11;i++,i++){
            printf("%d\n",(a+i));
        }
    }
    return 0;
}
