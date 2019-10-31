#include <stdio.h>
int main(){
	int inp,cout=0;
	do{
		printf("Enter input: ");
		scanf("%d",&inp);

		if(inp > 0){
			while(inp>0){
				cout++;
				inp /= 10;
			}
			printf("No of digits: %d\n",cout);

			break;
		}
	}while(inp <= 0);
}