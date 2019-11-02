#include <stdio.h>

void getInput(int *);
void printNoOfDigits(int);

int main(){
	int n;

	getInput(&n);
	printNoOfDigits(n);
}

void getInput(int *n){
	do{
		printf("Enter n: ");
		scanf("%d",n);
	}while(*n<=0);
	
}

void printNoOfDigits(int n){
	int cout=0;
	
	while(n>0){
		cout++;
		n /= 10;
	}
	
	printf("No of digits = %d",cout);
}