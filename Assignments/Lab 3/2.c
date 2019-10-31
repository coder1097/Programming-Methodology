#include <stdio.h>

void getInput(int *);
void printSumEvens(int);

int main(){
	int n;
	int *n_ptr = &n;

	getInput(n_ptr);
	printSumEvens(n);
}

void getInput(int *n_ptr){
	do{
		printf("Enter n: ");
		scanf("%d",n_ptr);
	}while(*n_ptr<=0);
	
}

void printSumEvens(int n){
	int sum=0;
	
	for(int i=2;i<=n;i+=2)
		sum += i;
	printf("Sum = %d",sum);
}

