#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void getInputs(int [], int);
void printArray(int [], int);
void sort(int [], int);

int main(){
	int a[100]={0};
	int size;

	printf("Enter size: ");
	scanf("%d",&size);

	getInputs(a,size);
	printArray(a,size);
	sort(a,size);
	printArray(a,size);
}

void getInputs(int a[], int size){

	srand(time(NULL));
	for(int i=0; i<size;i++)
		a[i] = rand()%1001;
}

void printArray(int a[], int size){
	printf("Array:");
	for(int i=0; i<size; i++)
		printf(" %d ",a[i]);
	printf("\n");
}

void sort(int a[], int size){
	int i, key, j;  
    for (i = 1; i < size; i++) 
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