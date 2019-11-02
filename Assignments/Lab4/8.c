#include <stdio.h>

void inputArray(int [],int *);
void deleteArray(int [],int *);
void swap(int *, int *);
void printArray(int [],int);

int main(){
	int n;
	int a[100] = {0};
	
	inputArray(a,&n);
	deleteArray(a,&n);
	printArray(a,n);
}

void inputArray(int a[], int *n){
	do{
		printf("Enter n: ");
		scanf("%d",n);
	}while(*n < 1);
	
	printf("Input elements: ");
	for(int i=0 ; i<*n; i++){
		scanf("%d",&a[i]);
	}
	
}

void deleteArray(int a[], int *n){
	int pos;
	
	printf("Enter position: ");
	scanf("%d", &pos);
	
	if(pos > *n){
		printf("Index out of bound");
		return;
	}else{
		*n--;
	} 
	
	for(int i=pos-1; i <= *n; i++){
		swap(&a[i],&a[i+1]);
	}		
}

void swap(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void printArray(int a[], int n){
	printf("Output: ");
	for(int i=0; i<n; i++){
		printf(" %d ",a[i]);
	}
}
