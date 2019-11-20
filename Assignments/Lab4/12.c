#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void inputArray(int [], int [], int *, int *);
void merge(int [],int [], int [], int,int,int *);
void printArray(int [], int);


int main(){
	int a[100],b[100],c[100];
	int a_size,b_size,c_size;

	inputArray(a,b,&a_size,&b_size);
	merge(a,b,c,a_size,b_size,&c_size);
	printArray(c,c_size);
}

void inputArray(int a[], int b[], int *a_size, int *b_size){
	do{
		printf("Size of array A: ");
		scanf("%d",a_size);
	}while(*a_size <= 1);

	do{
		printf("Size of array B: ");
		scanf("%d",b_size);
	}while(*b_size <= 1);

	srand(time(NULL));
	for(int i=0; i<*a_size;i++)
		a[i] = rand()%1001;
	for(int i=0; i<*b_size;i++)
		b[i] = rand()%1001;
}

void merge(int a[], int b[], int c[], int a_size, int b_size, int *c_size){
	int x=0;

	for(int i=0; i<a_size; i++){
		c[x]=a[i];
		x++;
	}

	for(int i=0; i<b_size; i++){
		c[x]=b[i];
		x++;
	}

	*c_size=x;	
}

void printArray(int a[], int size){
	printf("Output:");
	for(int i=0; i<size; i++)
		printf(" %d ",a[i]);
}

