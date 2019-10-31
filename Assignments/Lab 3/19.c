#include <stdio.h>

void getInput(int *);
long long int computeFactorial(int);
void output(long long int);

int main(){
	int n;
	int *n_ptr = &n;
	long long int res;

	getInput(n_ptr);
	res = computeFactorial(n);
	output(res);
}

void getInput(int *n_ptr){
	do{
		printf("Enter n: ");
		scanf("%d",n_ptr);
	}while(*n_ptr < 0);
}

long long int computeFactorial(int n){
	long long int fact=1;

	if(n >= 0 && n < 26){
		while(n > 1){
			fact *= n;
			n--;
		}
	}
	return fact; 
}

void output(long long int res){
	printf("Result= %lld",res);
}