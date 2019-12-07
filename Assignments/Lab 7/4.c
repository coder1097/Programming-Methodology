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

void sort(int a[], int n)
{
	int i, limit, temp;
	for (limit = n-2; limit >= 0; limit--)
	{
		for (i=0; i <= limit; i++)
		{
			if (a[i] < a[i+1])
			{
				swap(&a[i],&a[i+1]);
			}
		}
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