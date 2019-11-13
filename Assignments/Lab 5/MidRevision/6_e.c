#include <stdio.h>
int main(){
	int x,y,sum=1;
	
	do{
		printf("Enter x: ");
		scanf("%d",&x);		
	}while(x < 1);
	
	do{
		printf("Enter y: ");
		scanf("%d",&y);
	}while(y < 1);
	
	while(y>0){
		sum *= x;
		y--;
	}
	
	printf("Sum: %d", sum);
}