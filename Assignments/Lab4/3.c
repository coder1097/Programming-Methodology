#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void inputArray(int [], int *);
int findMin(int [], int);
void printArray(int [], int);

int main(){
	int n;
	int a[100] = {0};
	
	inputArray(a, &n);
	printArray(a,n);
	printf("Min: %d", findMin(a,n));
	
}

void inputArray(int a[], int *n){
	do{
		printf("Enter n: ");
		scanf("%d", n);
	}while(*n < 1);

	srand(time(NULL));
	
	for(int i=0; i<*n; i++)
		a[i] = rand();	
}

int findMin(int a[], int n){
	int min = a[0];
	
	for(int i=1; i<n; i++){
		if(min > a[i]) min = a[i];
	}
	
	return min;
}

void printArray(int a[], int size){
	for(int i=0; i<size; i++)
		printf("%d\n",a[i]);
}