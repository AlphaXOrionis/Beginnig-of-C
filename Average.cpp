
#include <stdio.h>
int main(){
	
	int a,b,c,d,e,f,g;
	float average;
	
	printf("Enter 7 numbers:\n");
	scanf("%d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g);
	average=(a+b+c+d+e+f+g)/7.0;
	printf("The average is %f",average);
}
