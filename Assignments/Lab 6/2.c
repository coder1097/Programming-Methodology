#include <stdio.h>

long long int computeFactorial(int);

int main(){
	int n;

	printf("Enter n: ");
	scanf("%d",&n);

	printf("Result: %lld",computeFactorial(n));
}

long long int computeFactorial(int n){
	if(n == 1) return 1;
	return n*computeFactorial(n-1);
} 