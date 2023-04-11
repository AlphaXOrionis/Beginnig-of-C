#include <stdio.h>
#include <math.h>

/* 
	ax^2+bx+c
*/	

int main(){
	
	int a,b,c;
	float x1,x2;
	float delta;
	
	printf("Enter the 'a' value of the equation:");
	scanf("%d", &a);
	printf("Enter the 'b' value of the equation:");
	scanf("%d", &b);
	printf("Enter the 'c' value of the equation:");
	scanf("%d", &c);
	
	delta= (b*b)-(4*a*c);
	x1=	(-b + (sqrt(delta)) ) /(2*a);
	x2= (-b - (sqrt(delta)) ) /(2*a);
	
	printf("\nThe x1 value of the equation is %.2f", x1);
	printf("\nThe x2 value of the equation is %.2f", x2);
	
	
}
