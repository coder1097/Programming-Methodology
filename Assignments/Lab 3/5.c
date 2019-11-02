#include <stdio.h>

void getInput(int *);
void printFALDigits(int);

int main(){
	int n;
	
	getInput(&n);
	printFALDigits(n);
}

void getInput(int *n){
	do{
		printf("Enter n: ");
		scanf("%d",n);
	}while(*n<=0);
	
}

void printFALDigits(int n){
	printf("Last digit: %d\n",n%10);
	
	while(n>=10){
		n /= 10;
	}
	
	printf("First digit: %d", n);
}