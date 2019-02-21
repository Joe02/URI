#include <stdio.h>
int main(void){
	int a=0,b=1;
	while(a!=b){
		scanf("%d %d",&a,&b);
		if(a<b){
			printf("Crescente\n");
		}
		if(a>b){
			printf("Decrescente\n");
		}
	}
	return 0;
}
