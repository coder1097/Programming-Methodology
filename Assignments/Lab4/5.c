#include <stdio.h>

void inputArray(int [], int *);
int sumNeg(int [], int);

int main(){
	int n;
	int a[100] = {0};
	
	inputArray(a,&n);
	printf("Sum: %d", sumNeg(a,n));
}

void inputArray(int a[], int *n){
	do{
		printf("Enter n: ");
		scanf("%d",n);
	}while(*n < 1);
	
	printf("Input elements: ");
	for(int i=0; i<*n; i++){
		scanf("%d", &a[i]);
	}
}

int sumNeg(int a[], int n){
	int sum=0;
	
	for(int i=0; i<n; i++){
		if(a[i] > 0) continue;
		sum += a[i];
	}
	
	return sum;
}