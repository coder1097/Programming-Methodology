#include <stdio.h>
int main(){
	int n,sum=0;

	do{
		printf("Enter input: ");
		scanf("%d",&n);

		if(n>0){
			for(int i=1; i<=n; i++)
				sum += i;
			printf("Sum = %d\n",sum);
		}
	}while(n <= 0);
}