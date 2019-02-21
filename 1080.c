#include <stdio.h>
int main(void){
	int i,posicao,maior=0,v[100];
	for(i=1;i<=100;i++){
		scanf("%d",&v[i]);
		if(v[i]>maior){
			maior=v[i];
			posicao=i;
		}
	}
	printf("%d\n%d\n",maior,posicao);
	return 0;
}
