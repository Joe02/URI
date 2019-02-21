#include <stdio.h>
int main(void){
    int casos,i,j,diamantes,dere=0,gue=0;
    char jucas[1001];
    scanf("%d",&casos);
	while(casos){
		diamantes=0;
	    scanf("%s",jucas);
	    for( i = 0; jucas[i]; i++){
	    	if(jucas[i] == '<'){
	    		for( j = i+1; jucas[j]; j++){
	    			if(jucas[j] == '>'){
	    				diamantes++;
	    				jucas[i]='.';
	    				jucas[j]='.';
	    				break;
	    			}
	    		}
	    	}
	    }
	    printf("%d\n",diamantes);
		casos--;
	}
 	
    return 0;
}
