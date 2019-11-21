#include <stdio.h>

void getInputs(int [],int);
void deleteArray(int [],int *);
void printArray(int [],int);

int main(){
	int a[100] = {0};
	int nElements;
	
	do{
		printf("Number of elements: ");
		scanf("%d",&nElements);
	}while(nElements < 1);

	getInputs(a,nElements);
	deleteArray(a,&nElements);
	printArray(a,nElements);
}

void getInputs(int a[], int nElements){
	
	printf("Input elements: ");
	for(int i=0 ; i<nElements; i++){
		scanf("%d",&a[i]);
	}
	
}

void deleteArray(int a[], int *nElements){
	int pos;
	
	printf("Enter position y want to delete: ");
	scanf("%d", &pos);
	
	if(pos > *nElements){
		printf("Index out of bound");
		return;
	}else{
		*nElements -= 1;
	} 
	
	for(int i=pos-1; i <= *nElements; i++){
		a[i] = a[i+1];
	}		
}

void printArray(int a[], int nElements){
	printf("Output: ");
	for(int i=0; i<nElements; i++){
		printf(" %d ",a[i]);
	}
}
