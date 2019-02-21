#include <stdio.h>
int main(void){
    int a,b,i=0;
    scanf("%d",&a);
    while(i<a){
        scanf("%d",&b);
        if(b!=0){
            if(b%2==0){
                if(b>0){
                    printf("EVEN POSITIVE\n");
                }else{
                    printf("EVEN NEGATIVE\n");
                }
            }else if(b%2!=0){
                if(b>0){
                    printf("ODD POSITIVE\n");
                }else{
                    printf("ODD NEGATIVE\n");
                }
            }
        }else{
            printf("NULL\n");
        }
        i++;
    }
                    
                 
    return 0;
}
