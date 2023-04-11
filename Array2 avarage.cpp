#include <stdio.h>

int main (void){
	
	float sum= 0.0;
	float numbers[7];
	int i;
	for(i=0 ; i<7 ; i++){
		
		printf("Enter a number:");
		scanf("%f", &numbers[i]);
		
	}
		
	for(i=0 ; i<7 ; i++){
		sum += numbers[i];
		
	}
	
	printf("The avarage of your numbers is %.2f.", sum/7);
	
	
	
	
}
