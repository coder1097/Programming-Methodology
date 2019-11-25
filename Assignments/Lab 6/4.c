#include <stdio.h>

long int compute(int,int);

int main(){
	int x,n;

	printf("Enter x: ");
	scanf("%d",&x);
	printf("Enter n: ");
	scanf("%d",&n);

	printf("Result: %ld",compute(x,n));
}

long int compute(int x, int n){
	if(n == 0) return 1;
	return x*compute(x,n-1);
}