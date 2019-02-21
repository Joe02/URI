#include <stdio.h>
int main(){
	int I=1,J=7;
	for(I=1;I<10;){
		printf("I=%d J=%d\n",I,J);
		printf("I=%d J=%d\n",I,J-1);
		printf("I=%d J=%d\n",I,J-2);
		I+=2;
		J+=2;		
	}
	return 0;
}
