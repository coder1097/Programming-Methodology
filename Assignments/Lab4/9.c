#include <stdio.h>

void inputArray(int [], int *);
int countDuplicateElements(int [], int);
void sort(int [],int);

int main(){
	int a[100] = {0};
	int size;

	inputArray(a,&size);
	printf("No of duplicate elements: %d", countDuplicateElements(a,size));
}

void inputArray(int a[], int *size){
	do{
		printf("Enter size: ");
		scanf("%d",size);
	}while(*size <= 1);

	printf("Input elements: ");
	for(int i=0; i < *size; i++){
		scanf("%d",&a[i]);
	}
}

int countDuplicateElements(int a[], int size){
	sort(a,size);

	int cout=0, n=size-1;
	for(int i=0; i<n; i++){
		if(a[i] == a[i+1]){
			if(i+2 > n) cout++;
			else
				if(a[i+1] != a[i+2]) cout++;
		}
	}

	return cout;
}

void sort(int arr[], int n)  
{  
    int i, key, j;  
    for (i = 1; i < n; i++) 
    {  
        key = arr[i];  
        j = i - 1;  
  
        /* Move elements of arr[0..i-1], that are  
        greater than key, to one position ahead  
        of their current position */
        while (j >= 0 && arr[j] > key) 
        {  
            arr[j + 1] = arr[j];  
            j = j - 1;  
        }  
        arr[j + 1] = key;  
    }  
}  