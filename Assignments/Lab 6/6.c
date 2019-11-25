#include <stdio.h>
#include <math.h>

int computeA(int);
float computeB(int);
long long int computeC(int);
float computeD(int);
long long int computeE(int);
long long int computeFactorial(int);

int main(){
	int n;

	printf("Enter n: ");
	scanf("%d",&n);

	printf("Result (A): %d\n",computeA(n));
	printf("Result (B): %f\n",computeB(n));
	printf("Result (C): %lld\n",computeC(n));
	printf("Result (D): %f\n",computeD(n));
	printf("Result (E): %lld\n",computeE(n));
}

int computeA(int n){
	if(n == 1) return 3;
	return (2*n+1)+computeA(n-1);
}

float computeB(int n){
	if(n == 1) return (float)1/2;
	return (float)n/2+computeB(n-1);
}

long long int computeC(int n){
	if(n == 1) return 1;
	return computeFactorial(n)+computeC(n-1);
}

float computeD(int n){
	if(n == 1) return 1;
	return sqrt(n)+computeD(n-1);
}

long long int computeE(int n){
	if(n == 1) return 1;
	return computeFactorial(n)*computeE(n-1);
}

long long int computeFactorial(int n){
	if(n == 1) return 1;
	return n*computeFactorial(n-1);
}