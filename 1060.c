#include <stdio.h>
int main(){
	int b=6,positivos=0;
	double a;
	for(b;b-1!=-1;b--){
		scanf("%lf",&a);
		if(a>=0){
			positivos++;
		}			
	}
	printf("%d valores positivos\n",positivos);
	
	return 0;
}
	
