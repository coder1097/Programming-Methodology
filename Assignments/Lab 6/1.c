#include <stdio.h>
int checkPrime(int,int);

int main(){
	int n;

	printf("Enter n: ");
	scanf("%d",&n);

	if(checkPrime(n,n-1) == 1)
		printf("%d is a prime number",n);
	else
		printf("%d is not a prime number",n);
}

int checkPrime(int x, int y){
	if(y == 1) return 1;
	if(x%y == 0) return 0;
	return checkPrime(x,y-1);
}