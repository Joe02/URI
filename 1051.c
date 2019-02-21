#include <stdio.h>
int main(){
	double s,imposto;
	scanf("%lf",&s);
	if(s>=0.00&&s<=2000.00){
		printf("Isento\n");
	}else if(s>=2000.01&&s<=3000.00){
	
		s-=2000.00;
		imposto=(s*(8.0/100.0));
		printf("R$ %.2lf\n",imposto);
		
	}else if(s>=3000.01&&s<=4500.00){
	
		imposto+=(1000.0*(8.0/100.0));
		imposto+=((s-3000.0)*(18.0/100.0));
		printf("R$ %.2lf\n",imposto);
		
	}else if(s>=4500.00){
	
		imposto+=(1000.0*(8.0/100.0));
		imposto+=(1500.0*(18.0/100.0));
		imposto+=((s-4500.0)*(28.0/100.0));
		printf("R$ %.2lf\n",imposto);
	}
	
	return 0;
}
		
