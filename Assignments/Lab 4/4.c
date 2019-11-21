#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void readInputs(int [],int);
long int sum(int [],int);
void printArray(int [],int);

int main(){
	int a[100] = {0};
	int nElements;
	
	do{
		printf("Number of elements: ");
		scanf("%d", &nElements);
	}while(nElements < 1);

	readInputs(a,nElements);
	printArray(a,nElements);
	printf("Sum: %ld", sum(a,nElements));
	
}

void readInputs(int a[], int nElements){

	srand(time(NULL));
	for(int i=0; i<nElements; i++)
		a[i] = rand()%1001;	
}

long int sum(int a[], int nElements){
	long int sum=0;

	for(int i=0; i<nElements; i++)
		sum += a[i];
	
	return sum;
}

void printArray(int a[], int nElements){
	printf("Array:");
	for(int i=0; i<nElements; i++)
		printf(" %d ", a[i]);
	printf("\n");
}