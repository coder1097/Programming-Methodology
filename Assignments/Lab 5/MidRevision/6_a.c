#include <stdio.h>
#include <math.h>

int main(){
	int n;
	float sum=0;
	
	do{
		printf("Enter n: ");
		scanf("%d",&n);
	}while(n < 1);
	
	for(int i=1;i<=n;i++){
		sum += (i+1)/sqrt(i);
	}
	
	printf("Sum: %.4f", sum);
}