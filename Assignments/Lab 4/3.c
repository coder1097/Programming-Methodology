#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void readInputs(int [], int);
int findMin(int [], int);
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
	printf("Min: %d", findMin(a,nElements));
	
}

void readInputs(int a[], int nElements){

	srand(time(NULL));
	for(int i=0; i<nElements; i++)
		a[i] = rand()%1001;	
}

int findMin(int a[], int nElements){
	int min = a[0];
	
	for(int i=1; i<nElements; i++){
		if(min > a[i]) min = a[i];
	}
	
	return min;
}

void printArray(int a[], int nElements){
	printf("Array:");
	for(int i=0; i<nElements; i++)
		printf(" %d ", a[i]);
	printf("\n");
}