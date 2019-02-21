#include <stdio.h>
int main(){
    int hi,hf,mi,mf;
    scanf("%d %d %d %d",&hi,&mi,&hf,&mf);
    int tempom=(hf*60+mf)-(hi*60+mi);
    if (tempom<=0){
        tempom+=1440;
    }
    int tempoh=tempom/60;
    tempom%=60;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",tempoh,tempom);
    return 0;
}
