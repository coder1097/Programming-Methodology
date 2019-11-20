#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void inputArray(int [],int *);
void printArray(int [],int);
void reverseArray(int [],int);
void swap(int *, int *);

int main(){
	int a[100];
	int size;

	inputArray(a,&size);
	printArray(a,size);
	reverseArray(a,size);
	printf("\n");
	printArray(a,size);
}

void inputArray(int a[],int *size){
	do{
		printf("Enter size: ");
		scanf("%d",size);
	}while(*size <= 1);

	srand(time(NULL));
	for(int i=0; i<*size; i++)
		a[i] = rand()%1001;
}

void printArray(int a[], int size){
	for(int i=0; i<size; i++)
		printf("%d\n",a[i]);
}

void reverseArray(int a[], int size){
	int j=size-1;

	for(int i=0; i<=(size-1)/2; i++){
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