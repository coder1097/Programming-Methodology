#include <stdio.h>
int main(){
	int inp;
	
	do{
		printf("Enter input: ");
		scanf("%d",&inp);

		if(inp > 0){
			printf("Result: ");

			while(inp>0){
				printf("%d",inp%10);
				inp /= 10;
			}

			break;
		}
	}while(inp <= 0);
}