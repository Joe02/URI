#include <stdio.h>
int main(void){
	int I=1,J=7;
	for(I=1;I<10;I++,I++){
		printf("I=%d J=%d\n",I,J);
		printf("I=%d J=%d\n",I,J-1);
		printf("I=%d J=%d\n",I,J-2);
	}
	return 0;
}
