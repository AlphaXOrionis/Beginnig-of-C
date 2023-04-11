#include <stdio.h>
int main (){
	
	int sum = 0;
	int i;
	int num;
	
	for (i =0 ;  true;i++){
		printf("Enter number: (Exit with -1.)");
		scanf("%d", &num);
		
		if (num == -1) {
			break;
		}
		
		sum += num;
		
	}
	printf("%d", sum);
}
