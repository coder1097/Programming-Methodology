#include <stdio.h>

int sumCD(int);

int main(){
	int a,b;

	do{
		printf("Enter a: ");
		scanf("%d",&a);
		printf("Enter b: ");
		scanf("%d",&b);
	}while(a<1 || b<1);

	if(sumCD(a) == b && sumCD(b) == a)
		printf("%d va %d la cap so ban",a,b);
	else 
		printf("%d va %d khong la cap so ban",a,b);
}

int sumCD(int a){
	int sum=0;
	
	for(int i=1; i < a; i++){
		if(a%i == 0) sum += i;
	}
	return sum;
}
