#include <stdio.h>
int main(){
	int b=6,positivos=0;
	double soma,media;
	double a;
	for(b;b-1!=-1;b--){
		scanf("%lf",&a);
		if(a>=0){
			positivos++;
			soma+=a;
		}			
	}
	media=(soma)/((float)positivos);
	printf("%d valores positivos\n%.1lf\n",positivos,media);
	
	return 0;
}
	
