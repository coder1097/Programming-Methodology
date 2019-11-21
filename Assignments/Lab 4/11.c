#include <stdio.h>

void getInputs(int [], int);
void countFrequency(int [],int,int [],int [], int *);
int count(int [],int,int);
void output(int [], int [],int);
void sort(int [], int);

int main(){
	int a[100], distinct[100], frequency[100];
	int size, distinct_size;

	printf("Number of elements: ");
	scanf("%d",&size);
	
	getInputs(a,size);
	countFrequency(a,size,distinct,frequency,&distinct_size);	
	output(distinct,frequency,distinct_size);
}

void getInputs(int a[], int size){

	for(int i=0; i<size;i++)
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

void sort(int a[], int size){
	int i, key, j;  
    for (i = 1; i < size; i++) 
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