#include <stdio.h>

void getInput(int *);
void printNumInReverseOrder(int);

int main(){
	int n;

	getInput(&n);
	printNumInReverseOrder(n);
}

void getInput(int *n){
	do{
		printf("Enter n: ");
		scanf("%d",n);
	}while(*n<=0);
	
}

void printNumInReverseOrder(int n){
	while(n>0){
		printf("%d",n%10);
		n /= 10;
	}
}