#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void getInputs(int [],int);
void printArray(int [],int);
long int sumEven(int [],int);

int main(){
	int a[100] = {0};
	int nElements;

	do{
		printf("Number of elements: ");
		scanf("%d",&nElements);
	}while(nElements < 1);

	getInputs(a,nElements);
	printArray(a,nElements);
	printf("Sum: %ld",sumEven(a,nElements));
}

void getInputs(int a[], int nElements){
	
	srand(time(NULL));
	for(int i=0;i<nElements;i++)
		a[i] = rand()%1001;
}

void printArray(int a[], int nElements){
	printf("Array:");
	for(int i=0;i<nElements;i++)
		printf(" %d ",a[i]);
	printf("\n");
}

long int sumEven(int a[],int nElements){
	long int sum=0;

	for(int i=0; i<nElements;i++){
		if(a[i] % 2 == 0) sum += a[i];
	}

	return sum;
}