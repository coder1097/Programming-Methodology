#include <stdio.h>

void getInput(int *);
void printNumInReverseOrder(int);

int main(){
	int n;
	int *n_ptr = &n;

	getInput(n_ptr);
	printNumInReverseOrder(n);
}

void getInput(int *n_ptr){
	do{
		printf("Enter n: ");
		scanf("%d",n_ptr);
	}while(*n_ptr<=0);
	
}

void printNumInReverseOrder(int n){
	while(n>0){
		printf("%d",n%10);
		n /= 10;
	}
}