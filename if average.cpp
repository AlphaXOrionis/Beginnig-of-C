#include <stdio.h>

int main(){
	
	int vize1,vize2,final;
	float average;
	float uni_average;
	
	printf("Enter your vize1 grade:");
	scanf("%d",&vize1);
	printf("Enter your vize2 grade:");
	scanf("%d",&vize2);
	printf("Enter your final grade:");
	scanf("%d",&final);
	printf("Enter university average:");
	scanf("%d",&uni_average);
	
	average= (vize1*0.30+vize2*0.30+final*0.40);
	printf("Your average is %.2f\n",average);
	
	if(average >= 60 && average < 70){
		printf("Your grade is D.");
		
		if(uni_average > 50){
			printf("Take the course next term again.");
		}
	}
	else if (average >= 70 && average < 80){
		printf("Your grade is C.");	
	}
	else if (average >= 80 && average < 90){
		printf("Your grade is B.");	
	}
	else if (average >= 90 && average <= 100){
		printf("Your grade is A.");	
	}
	else {
	printf("Your grade is F.");
	}
}
