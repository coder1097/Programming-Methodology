#include <stdio.h>
int main(){
	float d,r,perimeter,area;
	
	printf("Enter d: ");
	scanf("%f",&d);
	printf("Enter r: ");
	scanf("%f",&r);

	printf("Perimeter: %.2f\n", (d+r)*2);
	printf("Area: %.2f\n", d*r);
}