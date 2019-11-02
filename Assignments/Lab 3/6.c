#include <stdio.h>

void getInput(int *);
void printSumOfDigits(int);

int main(){
	int n;

	getInput(&n);
	printSumOfDigits(n);
}

void getInput(int *n){
	do{
		printf("Enter n: ");
		scanf("%d",n);
	}while(*n<=0);
	
}

void printSumOfDigits(int n){
	int sum=0;
	
	while(n>0){
		sum += n%10;
		n /= 10;
	}
	
	printf("Sum = %d",sum);
}

