#include <stdio.h>

int main() {
	
	int a1 = 65;
	char b1 = 66;
	char b2 = 13;
	char b3= 'A';
	float c1= 24.5;
	float c2 = 12.34;
	double d1= 51.43;
	double d2 = 32.456;
	
	printf("%d %c %d %c %.1f %.2f %.2f %.3f\n" , a1,b1,b2,b3,c1,c2,d1,d2, "\nHello");
	
	
	printf("%d byte\n", sizeof(int));
	printf("%d byte\n", sizeof(char));
	printf("%d byte\n", sizeof(short int));
	printf("%d byte\n", sizeof(long int));
	printf("%d byte\n", sizeof(float));
	printf("%d byte\n", sizeof(double));
		
}
