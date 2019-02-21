#include <stdio.h>
int main(){
    int linha=1;
    double i,j=1;
    for(i=0;i<=2.0;){
        
        if(linha==1||linha==6||linha==11){
            printf("I=%.f J=%.f\n",i,j);
            printf("I=%.f J=%.f\n",i,j+1);
            printf("I=%.f J=%.f\n",i,j+2);
            linha++;
        }else{
            printf("I=%.1f J=%.1f\n",i,j);
            printf("I=%.1f J=%.1f\n",i,j+1);
            printf("I=%.1f J=%.1f\n",i,j+2);
            linha++;
        }
        i+=0.2;
        j+=0.2;
        
    }
    return 0;
}
