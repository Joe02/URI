#include <stdio.h>
int main(){
	int inicio,fim,tempo=0,i=0;
	scanf("%d %d",&inicio,&fim);
	if(inicio>=0&&inicio<=23&&fim>=0&&fim<=23){
		if(inicio>=fim){
			fim+=24;
			tempo=fim-inicio;
		}else{
			while(inicio+i!=fim){
				i++;
				tempo++;
			}
		}
		printf("O JOGO DUROU %d HORA(S)\n",tempo);
	}
	return 0;
}1
