#include <stdio.h>
int main(){
	int n, sum=0;
	
	do{
		printf("Enter n: ");
		scanf("%d",&n);
		
		if(n == 1)
			printf("Sum: 0");
			
		if(n > 1){
			for(int i = 2; i <= n; i += 2)
				sum += i;
			printf("Sum: %d\n",sum);
		}
	}while(n <= 0);
}