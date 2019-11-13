#include <stdio.h>

void inputArray(int [], int *);
int countDuplicateElements(int [], int);

int main(){
	int n;
	int a[100] = {0};

	inputArray(a,&n);
	printf("No of duplicate elements: %d", countDuplicateElements(a,n));
}

void inputArray(int a[], int *n){
	do{
		printf("Enter n: ");
		scanf("%d",n);
	}while(*n < 2);

	printf("Input elements: ");
	for(int i=0; i < *n; i++){
		scanf("%d",&a[i]);
	}
}

int countDuplicateElements(int a[], int n){
	int cout=0;

	for(int i=0; i<n-1; i++){
		for(int j=i+1;j<n; j++){
			if(a[i] == a[j]){
				cout++;
				break;
			}
		}
	}

	return cout;
}