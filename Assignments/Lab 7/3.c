//T2-502
//T4-502
//T7/14-12/4/707
#include <stdio.h>

void sort(int [],int);
void swap(int *,int *);
void print(int [],int);

int main(){
	int a[100],n;
	
	printf("Enter n: ");
	scanf("%d",&n);

	printf("Elements: ");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	sort(a,n);
	print(a,n);
}

void sort(int a[], int n){
	for(int i=0; i<n-1; i++){
		int maxId=i;
		for(int j=i+1;j<n;j++){
			if(a[j] > a[maxId]) maxId=j;
		}
		swap(&a[i],&a[maxId]);
	}
}	

void swap(int *a, int *b){
	int tmp=*a;
	*a=*b;
	*b=tmp;
}

void print(int a[], int n){
	for(int i=0; i<n;i++)
		printf("%d ",a[i]);
}