#include <stdio.h>

void getInput(int *);
void printNoOfDigits(int);

int main(){
	int n;
	int *n_ptr = &n;

	getInput(n_ptr);
	printNoOfDigits(n);
}

void getInput(int *n_ptr){
	do{
		printf("Enter n: ");
		scanf("%d",n_ptr);
	}while(*n_ptr<=0);
	
}

void printNoOfDigits(int n){
	int cout=0;
	
	while(n>0){
		cout++;
		n /= 10;
	}
	
	printf("No of digits = %d",cout);
}