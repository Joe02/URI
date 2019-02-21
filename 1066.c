#include <stdio.h>
int main(){
	int b=5,pares=0,impares=0,negativos=0,positivos=0,aa;
	int a;
	
	for(b;b-1!=-1;b--){
		scanf("%d",&a);
		if(a>0){
			positivos++;
		}else if(a<0){
			negativos++;
		}
		
		if(a%2==0){
			pares++;
		}else{
			impares++;
		}
	}
	printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",pares,impares,positivos,negativos);
	return 0;
}
	
