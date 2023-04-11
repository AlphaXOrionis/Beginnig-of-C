#include <stdio.h>

int main(){
	
	int grade;
	printf("Enter your grade:");
	scanf("%d", &grade);
	
	if (grade > 50){
		printf("You are successful.");
		}
	else {
		printf("You are unsuccessful.");
	}
	return 0;
}
