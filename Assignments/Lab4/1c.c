#include <stdio.h>

void getInput(int *);
long long int compute(int);
long long int computeFactorial(int);

int main(){
	int n;
	
	getInput(&n);
	printf("Value: %lld", compute(n));
}

void getInput(int *n){
	do{
		printf("Enter n: ");
		scanf("%d",n);
	}while(*n < 1);
}

long long int compute(int n){
	long long int res=0;
	
	for(int i=1;i <=n; i++){
		res += computeFactorial(i)+1;
	}
	
	return res;
}

long long int computeFactorial(int n){
	long long int res=1;
	
	for(int i=2;i<=n; i++){
		res *= i;
	}
	
	return res;
}

