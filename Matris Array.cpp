#include <stdio.h>

int main (void){
	
	int matris[3][2];
	int i,j;
	
	for(i=0 ; i<3 ; i++){
		for(j=0 ; j<2 ; j++){
			scanf("%d" , &matris[i][j]);
		}
	}
	 for(i=0 ; i<3 ; i++){
		for(j=0 ; j<2 ; j++){
			printf("%d" , matris[i][j]);
		}
		printf("\n");
	}
	
	
}
