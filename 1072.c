#include <stdio.h>
int main(){
    int n,a;
    int in=0,out=0;
    scanf("%d",&n);
    while(n!=0){
        scanf("%d",&a);
        if(a>=10&&a<=20){
            in++;
        }else{
            out++;
        }
        n--;
    }
    printf("%d in\n",in);
    printf("%d out\n",out);
    return 0;
}
