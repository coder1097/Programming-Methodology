#include <stdio.h>

void inputArray(int [], int *);
void output(int [], int);
void deleteDuplicates(int [], int *);
void sort(int [], int);
int count(int [],int,int);

int main(){
	int a[100];
	int size;

	inputArray(a,&size);
	deleteDuplicates(a,&size);
	output(a,size);
}

void inputArray(int a[], int *size){
	do{
		printf("Enter size: ");
		scanf("%d",size);
	}while(*size <= 1);

	for(int i=0; i<*size;i++)
		scanf("%d",&a[i]);
}

void output(int a[], int size){
	printf("Output:");
	for(int i=0; i<size; i++)
		printf(" %d ",a[i]);
}

void deleteDuplicates(int a[], int *size){
	sort(a,*size);

	for(int i=0;i<*size-1;i++){
		int f = count(a,*size,i);
		if(f>1){
			int j=i+f, currentIndex=i+1;
			while(j<*size){
				a[currentIndex]=a[j];
				currentIndex++;
				j++;
			}
			*size -= f-1;
		}
	}
}

void sort(int a[], int n){
	int i, key, j;  
    for (i = 1; i < n; i++) 
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

int count(int a[], int size, int pos){
	int cout=1;
	
	for(int i=pos+1;i<size;i++){
		if(a[i] != a[pos]) break;
		cout++;
	}

	return cout;
}