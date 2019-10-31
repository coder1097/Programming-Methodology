#include <stdio.h>

void getInput(int *);
void printFALDigits(int);

int main(){
	int n;
	int *n_ptr = &n;
	
	getInput(n_ptr);
	printFALDigits(n);
}

void getInput(int *n_ptr){
	do{
		printf("Enter n: ");
		scanf("%d",n_ptr);
	}while(*n_ptr<=0);
	
}

void printFALDigits(int n){
	printf("Last digit: %d\n",n%10);
	
	while(n>=10){
		n /= 10;
	}
	
	printf("First digit: %d", n);
}