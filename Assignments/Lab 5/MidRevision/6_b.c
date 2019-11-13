#include <stdio.h>
int main(){
	int n,sum=0;
	
	do{
		printf("Enter n: ");
		scanf("%d",&n);
	}while(n < 1);
	
	for(int i=1; i<=n; i++){
		sum += i;
	}
	
	printf("Sum: %d",sum);
}