#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void readInputs(int [], int);
int findMax(int [], int);
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
	printf("Max: %d", findMax(a,nElements));
	
}

void readInputs(int a[], int nElements){

	srand(time(NULL));
	for(int i=0; i<nElements; i++)
		a[i] = rand()%1001;	
}

int findMax(int a[], int nElements){
	int max = a[0];
	
	for(int i=1; i<nElements; i++){
		if(max < a[i]) max = a[i];
	}
	
	return max;
}

void printArray(int a[], int nElements){
	printf("Array:");
	for(int i=0; i<nElements; i++)
		printf(" %d ", a[i]);
	printf("\n");
}