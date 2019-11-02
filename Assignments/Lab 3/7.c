#include <stdio.h>

void getInput(int *);
void printPOD(int);

int main(){
	int n;

	getInput(&n);
	printPOD(n);
}

void getInput(int *n){
	do{
		printf("Enter n: ");
		scanf("%d",n);
	}while(*n<=0);
	
}

void printPOD(int n){
	int prod=1;
	
	while(n>0){
		prod *= n%10;
		n /= 10;
	}
	
	printf("POD = %d",prod);
}