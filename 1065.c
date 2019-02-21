#include <stdio.h>
int main(){
	int b=5,pares=0,aa;
	double a;
	
	for(b;b-1!=-1;b--){
		scanf("%lf",&a);
		aa=a;
		if(a-aa==0){
			if(aa%2==0){
				pares++;
			}
		}					
	}
	printf("%d valores pares\n",pares);
	return 0;
}
	
