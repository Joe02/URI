#include <stdio.h>
#include <string.h>
int main(void){
    char original[1000],copia[1000];
    int i,k,j,n,m,l,T;
    scanf("%d",&T);
    getchar();
    while(T--){
    	gets(original);
    	k = strlen(original);
    	for(i=0;i<k;i++){
       		if((original[i]>='A' && original[i]<='Z') || (original[i]>='a'&& original[i]<='z'))
           		original[i] += 3;
   		}

		n=0;
    	for(j=k-1;j>=0;j--){
        	copia[n] = original[j];
        	n++;
   		}

        copia[n] = '\0';
    	l = k/2;
    	for(i=l;i<k;i++){
       	 	copia[i] -= 1;
    	}
    printf("%s\n",copia);

    }

}
