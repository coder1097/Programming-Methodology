#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void inputArray(int [],int *);
void printArray(int [],int);
long int sumArray(int [],int);

int main(){
	int a[100];
	int n;

	inputArray(a,&n);
	printArray(a,n);
	printf("Sum: %ld", sumArray(a,n));
}

void inputArray(int a[], int *size){
	do{
		printf("Enter size: ");
		scanf("%d",size);
	}while(*size < 1);

	srand(time(NULL));
	for(int i=0; i<*size;i++)
		a[i] = rand();
}

void printArray(int a[], int size){
	for(int i=0; i<size; i++)
		printf("%d\n",a[i]);
}

long int sumArray(int a[], int size){
	long int sum=0;

	for(int i=0;i<size;i++)
		sum += a[i];

	return sum;
}