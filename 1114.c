#include <stdio.h>
int main(void){
	int a;
	while(a!=2002){
		scanf("%d",&a);
		if(a!=2002){
			printf("Senha Invalida\n");
		}
		if(a==2002){
			printf("Acesso Permitido\n");
		}
	}
	return 0;
}
