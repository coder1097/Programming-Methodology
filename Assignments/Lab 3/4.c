#include <stdio.h>

void getInput(int *);
void printSumNaturals(int);

int main(){
	int n;

	getInput(&n);
	printSumNaturals(n);
}

void getInput(int *n){
	do{
		printf("Enter n: ");
		scanf("%d",n);
	}while(*n<=0);	
}

void printSumNaturals(int n){
	int sum=0;
	
	for(int i=1;i<=n;i++)
		sum += i;
	
	printf("Sum = %d",sum);
}