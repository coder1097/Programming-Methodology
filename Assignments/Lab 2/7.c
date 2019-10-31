#include <stdio.h>
int main(){
	int inp,prod=1;
	do{
		printf("Enter input: ");
		scanf("%d",&inp);
		
		if(inp > 0){
			while(inp > 0){
				prod *= (inp%10);
				inp /= 10;
			}
			printf("Product: %d\n",prod);

			break;	
		}
	}while(inp <= 0);
	
}