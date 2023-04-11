#include <stdio.h>
int main (){
	
	int sum =0;
	int i;
	
	for (i =1 ; i<=10 ; i++){
		if(i%2 == 1){
			continue;
		}
		sum += i;
	}
	printf("%d", sum);
	
	
	
	
	
	
}
