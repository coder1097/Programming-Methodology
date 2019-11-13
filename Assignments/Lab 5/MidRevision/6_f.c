#include <stdio.h>
int main(){
	int n;
	float sum=0;
	
	do{
		printf("Enter n:");
		scanf("%d",&n);
	}while(n <= 0);
	
	for(int i=1; i<=n; i++){
		if(i%2==0)
			sum += (float)1/i;
		else
			sum -= (float)1/i;
	}

	printf("Sum: %.4f",sum);
}