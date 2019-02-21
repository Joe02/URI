#include <stdio.h>
int main(void){
	int casos,a,b;
	scanf("%d",&casos);
	while(casos--){
		scanf("%d %d",&a,&b);
		while(a!=b){
			if(a>b){
				a-=b;
			}else{
				b-=a;
			}
		}
		printf("%d\n",a);
	}
	return 0;
}				
