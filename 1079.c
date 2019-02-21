#include <stdio.h>
int main(){
	int n,i;
	double a,b,c,media;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%lf %lf %lf",&a,&b,&c);
		media=((2.0*a)+(3.0*b)+(5.0*c))/10.0;
		printf("%.1lf\n",media);
	}
	return 0;
}
