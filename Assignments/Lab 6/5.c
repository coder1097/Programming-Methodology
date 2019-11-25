#include <stdio.h>

int countDigits(int);

int main(){
	int n;

	printf("Enter n: ");
	scanf("%d",&n);

	printf("Result: %d",countDigits(n));
}

int countDigits(int n){
	if(n == 0) return 0;
	return 1+countDigits(n/10);
}