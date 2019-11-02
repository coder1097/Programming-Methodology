#include <stdio.h>

void inputArray(int [], int *);
int findMax(int [], int);

int main(){
	int n;
	int a[100] = {0};
	
	inputArray(a, &n);
	printf("Max: %d", findMax(a,n));
	
}

void inputArray(int a[], int *n){
	do{
		printf("Enter n: ");
		scanf("%d", n);
	}while(*n < 1);
	
	printf("Input elements: ");
	for(int i=0; i<*n; i++){
		scanf("%d",&a[i]);
	}
}

int findMax(int a[], int n){
	int max = a[0];
	
	for(int i=1; i<n; i++){
		if(max < a[i]) max = a[i];
	}
	
	return max;
}