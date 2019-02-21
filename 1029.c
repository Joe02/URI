#include <stdio.h>
int casos;
int fib(int n){
    casos++;
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }else{
        return fib(n-1) + fib(n-2);
    }
    
}
int main(){
    int qtd,numero;
    scanf("%d",&qtd);
    for(int i=0;i<qtd;i++){
            scanf("%d",&numero);
            casos = 0;
            printf("fib(%d) = %d calls = %d\n",numero,casos-1,fib(numero));
    }
    return 0;
}

