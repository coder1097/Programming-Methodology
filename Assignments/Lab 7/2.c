#include <stdio.h>

int search(int [], int,int);
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
	int low=0,high=n-1,mid;
	while(low <= high){
		mid=(low+high)/2;
		if(a[mid] == k) return mid+1;
		else if(a[mid] < k) low=mid+1;
		else high=mid-1;
	}
	return -1;
}