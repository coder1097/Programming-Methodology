#include <stdio.h>

void getInput(int *);
void printSumOfDigits(int);

int main(){
	int n;
	int *n_ptr = &n;

	getInput(n_ptr);
	printSumOfDigits(n);
}

void getInput(int *n_ptr){
	do{
		printf("Enter n: ");
		scanf("%d",n_ptr);
	}while(*n_ptr<=0);
	
}

void printSumOfDigits(int n){
	int sum=0;
	
	while(n>0){
		sum += n%10;
		n /= 10;
	}
	
	printf("Sum = %d",sum);
}

