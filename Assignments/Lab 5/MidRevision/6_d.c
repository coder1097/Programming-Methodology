#include <stdio.h>

int main(){
	int n;
	long long fact=1;
	
	do{
		printf("Enter n: ");
		scanf("%d",&n);
	}while(n < 1 && n > 25);
	
	for(int i=1; i <= n; i++){
		fact *= i;
	}
	
	printf("Sum: %lld", fact);
}