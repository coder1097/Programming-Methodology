#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void inputArray(int [], int *);
void split(int [], int [], int [],int,int *,int *);
void printArray(int [], int [], int,int);


int main(){
	int a[100],even[100],odd[100];
	int size,even_size,odd_size;

	inputArray(a,&size);
	split(a,even,odd,size,&even_size,&odd_size);
	printArray(even,odd,even_size,odd_size);
}

void inputArray(int a[], int *size){
	do{
		printf("Enter size: ");
		scanf("%d",size);
	}while(*size <= 1);

	srand(time(NULL));
	for(int i=0; i<*size;i++)
		a[i] = rand()%1001;
}

void split(int a[], int even[], int odd[], int size, int *even_size, int *odd_size){
	int x=0,y=0;

	for(int i=0;i<size;i++){
		if(a[i]%2 == 0){
			even[x]=a[i];
			x++;
		}else{
			odd[y]=a[i];
			y++;
		}
	}

	*even_size=x;
	*odd_size=y;
}

void printArray(int even[], int odd[], int even_size, int odd_size){
	printf("Even array:");
	for(int i=0; i<even_size; i++)
		printf(" %d ",even[i]);

	printf("\n");

	printf("Odd array:");
	for(int i=0; i<odd_size; i++)
		printf(" %d ",odd[i]);	
}

