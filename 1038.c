#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a==1){
        printf("Total: R$ %.2f\n",4.00*b);
    }
    if(a==2){
        printf("Total: R$ %.2f\n",4.50*b);
    }
    if(a==3){
        printf("Total: R$ %.2f\n",5.00*b);
    }
    if(a==4){
        printf("Total: R$ %.2f\n",2.00*b);
    }
    if(a==5){
        printf("Total: R$ %.2f\n",1.50*b);
    }
    return 0;
}
