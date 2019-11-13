#include <stdio.h>

int main(){
	int a,b;

	do{
		printf("Enter a: ");
		scanf("%d",&a);
		printf("Enter b: ");
		scanf("%d",&b);
	}while(a < 1 || b < 1);
	
	while(a != b){
		if(a>b) a -= b;
		else b -= a;
	}

	printf("GCD: %d",a);
}