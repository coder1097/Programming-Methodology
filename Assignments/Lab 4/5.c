#include <stdio.h>

void getInputs(int [], int);
int sumNeg(int [], int);

int main(){
	int a[100] = {0};
	int nElements;
	
	do{
		printf("Number of elements: ");
		scanf("%d",&nElements);
	}while(nElements < 1);

	getInputs(a,nElements);
	printf("Sum: %d", sumNeg(a,nElements));
}

void getInputs(int a[], int nElements){
	
	printf("Input elements: ");
	for(int i=0; i<nElements; i++){
		scanf("%d", &a[i]);
	}
}

int sumNeg(int a[], int nElements){
	int sum=0;
	
	for(int i=0; i<nElements; i++){
		if(a[i] > 0) continue;
		sum += a[i];
	}
	
	return sum;
}