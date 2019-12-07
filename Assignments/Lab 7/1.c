#include <stdio.h>

int search(int [],int,int);
int main(){
	int a[100],n,k;
	
	printf("Enter n: ");
	scanf("%d",&n);

	printf("Elements: ");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	printf("Key: ");
	scanf("%d",&k);
	
	printf("Found at position %d",search(a,n,k));
}

int search(int a[], int n, int k){
	for(int i=0;i<n;i++){
		if(a[i]==k) return i+1;
	}
	return -1;
}