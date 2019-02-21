#include <stdio.h>
int main(void){
    float i,x,n1=-1,n2=-1;
    float media;
    while(n1==-1){
        scanf("%f",&x);
        if(x>=0.0&&x<=10.0){
            n1=x;
        }else{
            printf("nota invalida\n");
        }
    }
    
    while(n2==-1){
        scanf("%f",&x);
        if(x>=0.0&&x<=10.0){
            n2=x;
        }else{
            printf("nota invalida\n");
        }
    }
    
    media=(n1+n2)/2.0;
    printf("media = %.2f\n",media);
    return 0;
}
    
