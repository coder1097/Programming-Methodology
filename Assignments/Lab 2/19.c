#include <stdio.h>
int main(){
	int inp;
	long long int fact=1;

	do{
		printf("Enter input: ");
		scanf("%d",&inp);

		if(inp >= 0 && inp < 26){
			while(inp > 1){
				fact *= inp;
				inp--;
			}
			printf("Result= %lld",fact);
		}
	}while(inp < 0);
}