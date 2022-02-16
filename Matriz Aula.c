#include<stdio.h>

int main(){
	
	int matriz[12][12],i, j;
	
	for(i=0;j<12;i++){
		for(j=0;j<12;j++){
			matriz[i][j] = i*j;
		}	
	}
	
	for(i=0;j<12;i++){
		for(j=0;j<12;j++){
			if(i==j)
				printf("%d\t",matriz[i][j]);
		}
		printf("\n");
	}
			
}
