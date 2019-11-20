#include <stdio.h>

void getInputs(int [], int);
void deleteDuplicates(int [], int *);
void sort(int [], int);
int count(int [],int,int);
void output(int [], int);

int main(){
	int a[100]={0};
	int nElements;

	do{
		printf("Number of elements: ");
		scanf("%d",&nElements);
	}while(nElements <= 1);

	getInputs(a,nElements);
	deleteDuplicates(a,&nElements);
	output(a,nElements);
}

void getInputs(int a[], int nElements){
	
	printf("Input elements: ");
	for(int i=0; i<nElements;i++)
		scanf("%d",&a[i]);
}

void output(int a[], int nElements){
	printf("Output:");
	for(int i=0; i<nElements; i++)
		printf(" %d ",a[i]);
}

void deleteDuplicates(int a[], int *nElements){
	sort(a,*nElements);

	for(int i=0;i<*nElements-1;i++){
		int f = count(a,*nElements,i);
		if(f>1){
			int j=i+f, currentIndex=i+1;
			while(j<*nElements){
				a[currentIndex]=a[j];
				currentIndex++;
				j++;
			}
			*nElements -= f-1;
		}
	}
}

void sort(int a[], int nElements){
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

int count(int a[], int nElements, int pos){
	int cout=1;
	
	for(int i=pos+1;i<nElements;i++){
		if(a[i] != a[pos]) break;
		cout++;
	}

	return cout;
}