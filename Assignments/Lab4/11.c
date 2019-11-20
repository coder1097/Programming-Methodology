#include <stdio.h>

void inputArray(int [], int *);
void countFrequency(int [],int,int [],int [], int *);
int count(int [],int,int);
void output(int [], int [],int);
void sort(int [], int);

int main(){
	int a[100], distinct[100], frequency[100];
	int size, distinct_size;

	inputArray(a,&size);
	countFrequency(a,size,distinct,frequency,&distinct_size);	
	output(distinct,frequency,distinct_size);
}

void inputArray(int a[], int *size){
	do{
		printf("Enter size: ");
		scanf("%d",size);
	}while(*size <= 1);

	for(int i=0; i<*size;i++)
		scanf("%d",&a[i]);
}

void countFrequency(int a[], int size, int distinct[], int frequency[], int *distinct_size){
	sort(a,size);

	int i=0, x=0;
	while(i<size){
		int f=count(a,size,i);
		distinct[x]=a[i];
		frequency[x]=f;
		
		i += f;
		x++;
	}
	*distinct_size=x;
}

int count(int a[], int size, int pos){
	int cout=1;
	
	for(int i=pos+1;i<size;i++){
		if(a[i] != a[pos]) break;
		cout++;
	}

	return cout;
}

void output(int distinct[], int frequency[], int size){
	printf("Elements:");
	for(int i=0; i<size; i++){
		printf(" %d ",distinct[i]);
	}

	printf("\n");
	
	printf("Frequency:");
	for(int i=0; i<size; i++){
		printf(" %d ",frequency[i]);
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