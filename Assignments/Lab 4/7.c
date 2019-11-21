#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void getInputs(int [],int);
void printArray(int [],int);
void reverse(int [],int);
void swap(int *, int *);

int main(){
	int a[100]= {0};
	int nElements;

	do{
		printf("Number of elements: ");
		scanf("%d",&nElements);
	}while(nElements <= 1);

	getInputs(a,nElements);
	printArray(a,nElements);
	reverse(a,nElements);
	printArray(a,nElements);
}

void getInputs(int a[],int nElements){

	srand(time(NULL));
	for(int i=0; i<nElements; i++)
		a[i] = rand()%1001;
}

void printArray(int a[], int nElements){
	printf("Array:");
	for(int i=0; i<nElements; i++)
		printf(" %d ",a[i]);
	printf("\n");
}

void reverse(int a[], int nElements){
	int j=nElements-1;

	for(int i=0; i<=(nElements-1)/2; i++){
		if(i == j) break;
		swap(&a[i],&a[j]);
		j--;
	}
}

void swap(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}