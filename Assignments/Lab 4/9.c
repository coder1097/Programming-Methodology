#include <stdio.h>

void getInputs(int [], int);
int countDuplicateElements(int [], int);
void sort(int [],int);

int main(){
	int a[100] = {0};
	int nElements;

	do{
		printf("Number of elements: ");
		scanf("%d",&nElements);
	}while(nElements <= 1);

	getInputs(a,nElements);
	printf("No of duplicate elements: %d", countDuplicateElements(a,nElements));
}

void getInputs(int a[], int nElements){
	
	printf("Input elements: ");
	for(int i=0; i < nElements; i++){
		scanf("%d",&a[i]);
	}
}

int countDuplicateElements(int a[], int nElements){
	sort(a,nElements);

	int cout=0, n=nElements-1;
	for(int i=0; i<n; i++){
		if(a[i] == a[i+1]){
			if(i+2 > n) cout++;
			else
				if(a[i+1] != a[i+2]) cout++;
		}
	}

	return cout;
}

void sort(int a[], int nElements)  
{  
    int i, key, j;  
    for (i = 1; i < nElements; i++) 
    {  
        key = a[i];  
        j = i - 1;  
  
        while (j >= 0 && a[j] > key) 
        {  
            a[j + 1] = a[j];  
            j = j - 1;  
        }  
        a[j + 1] = key;  
    }  
}  