#include <stdio.h>
int main(void){
	int h1,m1,h2,m2,minutos1,minutos2,tempo;
	scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
	while(h1!=0 || m1!=0 || h2!=0 || m2!=0){
		minutos1=(h1*60)+m1;
		minutos2=(h2*60)+m2;
		if(h1<h2){
			tempo=minutos2-minutos1;
		}else if(h1>h2){
			tempo=(minutos2+1440)-(minutos1);
		}else if(h1==h2){
			if(m1==m2){
				tempo=0;
			}else if(m1>m2){
				tempo=(minutos2+1440)-(minutos1);
			}else{
				tempo=minutos2-minutos1;
			}
		}
		printf("%d\n",tempo);
		scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
	}
	return 0;
}
				
			
	
