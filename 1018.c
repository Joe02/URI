#include <stdio.h>
int main(){
    int a;
    int count100=0,count50=0,count20=0,count10=0,count5=0,count2=0,count1=0;
    scanf("%d",&a);
    printf("%d\n",a);
    while(a-100>=0){
        count100++;
        a-=100;
    }
    while(a-50>=0){
        count50++;
        a-=50;
    }
    while(a-20>=0){
        count20++;
        a-=20;
    }
    while(a-10>=0){
        count10++;
        a-=10;
    }
    while(a-5>=0){
        count5++;
        a-=5;
    }
    while(a-2>=0){
        count2++;
        a-=2;
    }
    while(a-1>=0){
        count1++;
        a--;
    }
    printf("%d nota(s) de R$ 100,00\n",count100);
    printf("%d nota(s) de R$ 50,00\n",count50);
    printf("%d nota(s) de R$ 20,00\n",count20);
    printf("%d nota(s) de R$ 10,00\n",count10);
    printf("%d nota(s) de R$ 5,00\n",count5);
    printf("%d nota(s) de R$ 2,00\n",count2);
    printf("%d nota(s) de R$ 1,00\n",count1);
    return 0;
}
