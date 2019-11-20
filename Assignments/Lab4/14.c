#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void inputArray(int [], int *);
int search(int [],int);

int main(){
	int a[100];
	int size;

	inputArray(a,&size);
	printf("Output: %d",search(a,size));
	
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

int search(int a[], int size){
	int key;
	
	do{
		printf("Enter key value (>=0): ");
		scanf("%d",&key);
	}while(key < 0);
	
	for(int i=0; i<size; i++){
		if(a[i] == key) return key;
	}

	return -1;
}



