#include <stdio.h>

int main(){
	int a,b,c;

	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);
	printf("Enter c: ");
	scanf("%d",&c);

	printf("Max: %d", a>b ? (a>c ? a:c) : (b>c ? b:c));
}