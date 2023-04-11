#include <stdio.h>
#define PI 3.14159

int main(){
	
	int radius;
	float volume;
	
	printf("Enter the radius of the sphere:");
	scanf("%d", &radius);
	
	volume= (4/3.0)*PI*(radius*radius*radius);
	printf("Volume of the sphere is %f.", volume);
}
