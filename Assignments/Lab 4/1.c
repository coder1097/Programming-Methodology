#include <stdio.h>

void getInput(int *);
long long int computeFactorial(int);
float computeExA(int);
int computeExB(int);
long long int computeExC(int);
long long int computeExD(int);
float computeExE(int);

int main(){
	int n;

	getInput(&n);
	printf("Result A: %f\n",computeExA(n));	
	printf("Result B: %d\n",computeExB(n));
	printf("Result C: %lld\n",computeExC(n));
	printf("Result D: %lld\n",computeExD(n));
	printf("Result E: %f",computeExE(n));
}

void getInput(int *n){
	do{
		printf("Enter n: ");
		scanf("%d",n);
	}while(*n < 1);
}

//Ex A
float computeExA(int n){
	float res=0;

	for(int i=1;i<=n;i++)
		res += (float)i/2;

	return res;
}
//Ex B
int computeExB(int n){
	int res=0;

	for(int i=1;i<=n;i++)
		res += (2*i+1);

	return res;
}

//Ex C
long long int computeExC(int n){
	long long int res=0;
	
	for(int i=1;i <=n; i++){
		res += computeFactorial(i)+1;
	}
	
	return res;
}

long long int computeExD(int n){
	long long int res=1;

	for(int i=1;i<=n;i++)
		res *= computeFactorial(i);

	return res;
}

float computeExE(int n){
	float res=1;

	for(int i=1; i<=n; i++)
		res *= (float)2*i/3;

	return res;
}

long long int computeFactorial(int n){
	long long int res=1;
	
	for(int i=2;i<=n; i++){
		res *= i;
	}
	
	return res;
}

