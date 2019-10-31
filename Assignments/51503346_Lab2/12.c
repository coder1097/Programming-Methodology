#include <stdio.h>
int main(){
	int inp,flag=1;

	do{
		printf("Enter input: ");
		scanf("%d",&inp);
		if(inp>1){
			for(int i = 2; i <= inp/2; i++){
				if(inp%i == 0){
					flag=0;
					break;
				}
			}

			if(flag==0)
				printf("%d is not a prime",inp);
			else
				printf("%d is a prime",inp);	
		}
	}while(inp < 2);
}