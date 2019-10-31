#include <stdio.h>
int main(){
	float cel;
	
	printf("Enter Celsius deg: ");
	scanf("%f",&cel);

	printf("Fah: %.2f",(cel*(float)9/5)+32);
}