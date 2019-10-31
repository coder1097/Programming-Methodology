#include <stdio.h>

void getInput(int *);
void printPOD(int);

int main(){
	int n;
	int *n_ptr = &n;

	getInput(n_ptr);
	printPOD(n);
}

void getInput(int *n_ptr){
	do{
		printf("Enter n: ");
		scanf("%d",n_ptr);
	}while(*n_ptr<=0);
	
}

void printPOD(int n){
	int prod=1;
	
	while(n>0){
		prod *= n%10;
		n /= 10;
	}
	
	printf("POD = %d",prod);
}