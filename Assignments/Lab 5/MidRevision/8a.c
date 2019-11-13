#include <stdio.h>

int main(){
	int a,b,max;

	do{
		printf("Enter a: ");
		scanf("%d",&a);
		printf("Enter b: ");
		scanf("%d",&b);
	}while(a<1 || b<1);

	max = a>=b ? a : b;

	for(int i=1;i<=max;i++){
		if(a%i == 0 && b%i == 0) printf(" %d ",i);
	}
}