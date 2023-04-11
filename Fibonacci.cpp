#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int num1=1;
	int num2=1;
	int i;
	
	printf("%d\n%d\n",num1,num2);
	
	for(i=0 ; i<16 ; i++){
		
		int temp = num2;
		num2 += num1;
		num1 =temp;
		
		printf("%d\n", num2);
	}
}
