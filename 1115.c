#include <stdio.h>
int main(void){
	int a=1,b=1;
	while(a!=0&&b!=0){
		scanf("%d %d",&a,&b);
		if(a>=1&&b>=1){
			printf("primeiro\n");
		}else if(a<=-1&&b>=1){
			printf("segundo\n");
		}else if(a<=-1&&b<=-1){
			printf("terceiro\n");
		}else if(a>=1&&b<=-1){
			printf("quarto\n");
		}
		
	}
	return 0;
}
		
