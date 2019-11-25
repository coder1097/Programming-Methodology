#include <stdio.h>

long int compute(int);

int main(){
	int n;

	printf("Enter n: ");
	scanf("%d",&n);

	printf("Result: %ld",compute(n));
}

long int compute(int n){
	if(n == 0) return 1;
	return 2*compute(n-1);
}