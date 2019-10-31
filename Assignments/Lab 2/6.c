#include <stdio.h>
int main(){
	int inp,sum=0,fDig,lDig;
	
	do{
		printf("Enter input: ");
		scanf("%d",&inp);

		if(inp>0){
			while(inp>0){
				sum += inp%10;
				inp /= 10;
			}
			printf("Sum = %d\n",sum);

			break;
		}
	}while(inp <= 0);
}