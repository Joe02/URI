#include <stdio.h>
int main(void){
	double a,aumento,novo;
	scanf("%lf",&a);
	if(a>=0&&a<=400.00){
		aumento=(a)*(15.0/100);
		novo=aumento+a;
		printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 15 %\n",novo,aumento);
	}else if(a>=400.01&&a<=800.00){
		aumento=(a)*(12.0/100);
		novo=aumento+a;
		printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 12 %\n",novo,aumento);
	}else if(a>=800.01&&a<=1200.00){
		aumento=(a)*(10.0/100);
		novo=aumento+a;
		printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 10 %\n",novo,aumento);
	}else if(a>=1200.01&&a<=2000.00){
		aumento=(a)*(7.0/100);
		novo=aumento+a;
		printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 7 %\n",novo,aumento);
	}else if(a>=2000.0){
		aumento=(a)*(4.0/100);
		novo=aumento+a;
		printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 4 %\n",novo,aumento);
	}
	return 0;
}
	
