#include <stdio.h>
int main(void){
	int cobaias=0,c=0,r=0,s=0,i,n,a;
	char letra;
	double pc,pr,ps;
	scanf("%d",&n);	
	for(i=1;i<=n;i++){
		scanf("%d %c",&a,&letra);
		if(letra=='C'){
			cobaias+=a;
			c+=a;
		}else if(letra=='R'){
			cobaias+=a;
			r+=a;
		}else if(letra=='S'){
			cobaias+=a;
			s+=a;
		}
	}
	pc=((c)*100.0)/cobaias;
	ps=((s)*100.0)/cobaias;
	pr=((r)*100.0)/cobaias;
	printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\nPercentual de coelhos: %.2lf %%\nPercentual de ratos: %.2lf %%\nPercentual de sapos: %.2lf %%\n",cobaias,c,r,s,pc,pr,ps);
	return 0;
}
	
