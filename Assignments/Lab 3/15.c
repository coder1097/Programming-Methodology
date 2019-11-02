#include <stdio.h>

void getInput(int *);
void printPrimes(int);

int main(){
	int n;

	getInput(&n);
	printPrimes(n);
}

void getInput(int *n){
	do{
		printf("Enter n: ");
		scanf("%d",n);
	}while(*n < 2);
}

void printPrimes(int n){
	int flag;

	for(int i = 1; i <= n; i++){
		flag=1;

		if(i==1) continue;
		for(int j = 2; j <= i/2; j++){
			if(i%j == 0){
				flag=0;
				break;
			}
		}
		if(flag==1) printf("%d ",i);
	}
}