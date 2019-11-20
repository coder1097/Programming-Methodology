#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void inputArray(int [], int *);
void printArray(int [], int);
void sort(int [], int);

int main(){
	int a[100];
	int size;

	inputArray(a,&size);
	printArray(a,size);
	sort(a,size);
	printf("\n");
	printArray(a,size);
}

void inputArray(int a[], int *size){
	do{
		printf("Enter size: ");
		scanf("%d",size);
	}while(*size <= 1);

	srand(time(NULL));
	for(int i=0; i<*size;i++)
		a[i] = rand()%1001;
}

void printArray(int a[], int size){
	for(int i=0; i<size; i++)
		printf("%d\n",a[i]);
}

void sort(int a[], int n){
	int i, key, j;  
    for (i = 1; i < n; i++) 
    {  
        key = a[i];  
        j = i - 1;  
  
        /* Move elements of arr[0..i-1], that are  
        greater than key, to one position ahead  
        of their current position */
        while (j >= 0 && a[j] > key) 
        {  
            a[j + 1] = a[j];  
            j = j - 1;  
        }  
        a[j + 1] = key;  
    }
}