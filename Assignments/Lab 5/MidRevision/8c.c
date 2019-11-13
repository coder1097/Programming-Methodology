#include <stdio.h>

int computeGCD(int,int);

int main(){
	int a,b,gcd,lcm;

	do{
		printf("Enter a: ");
		scanf("%d",&a);
		printf("Enter b: ");
		scanf("%d",&b);
	}while(a<1 || b<1);

	gcd = computeGCD(a,b);
	lcm = (a*b)/gcd;

	printf("LCM: %d",lcm);
}

int computeGCD(int a,int b){
	while(a != b){
		if(a>b) a -= b;
		else b -= a;
	}
	return a;
}