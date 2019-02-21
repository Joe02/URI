#include <stdio.h>
int main(void){
	int i,n,a,b;
	double resultado;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d %d",&a,&b);
		resultado=((float)a)/((float)b);
		if(b!=0){
			printf("%.1lf\n",resultado);
		}else{
			printf("divisao impossivel\n");
		}
	}
	return 0;
}
