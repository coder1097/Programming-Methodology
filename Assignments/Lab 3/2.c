#include <stdio.h>

void getInput(int *);
void printSumEvens(int);

int main(){
	int n;

	getInput(&n);
	printSumEvens(n);
}

void getInput(int *n){
	do{
		printf("Enter n: ");
		scanf("%d",n);
	}while(*n<=0);
	
}

void printSumEvens(int n){
	int sum=0;
	
	for(int i=2;i<=n;i+=2)
		sum += i;
	printf("Sum = %d",sum);
}

