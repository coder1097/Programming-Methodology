#include <stdio.h>

void getInput(int *);
void printSumNaturals(int);

int main(){
	int n;
	int *n_ptr = &n;

	getInput(n_ptr);
	printSumNaturals(n);
}

void getInput(int *n_ptr){
	do{
		printf("Enter n: ");
		scanf("%d",n_ptr);
	}while(*n_ptr<=0);	
}

void printSumNaturals(int n){
	int sum=0;
	
	for(int i=1;i<=n;i++)
		sum += i;
	
	printf("Sum = %d",sum);
}