#include <stdio.h>

int main (void){
	
	int matris[3][5];
	int i,j;
	int sum;
	
	for(i=0 ; i<3 ; i++){
		for(j=0 ; j<5 ; j++){
			scanf("%d" , &matris[i][j]);
		}
	}
	for(j=0 ; j<5 ; j++){
		for(i=0 ; i<3 ; i++){
			sum += matris[i][j];
		}
		printf("%d ", sum);
		sum=0;
	}
	
	
	
	
	
}
