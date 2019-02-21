#include <stdio.h>
int main(){
    int a,i=1;
    scanf("%d",&a);
    if(a>2&&a<1000){
        
        for(i=1;i<11;i++){
            printf("%d x %d = %d\n",i,a,(i*a));
        }
        
    }
    return 0;
}
