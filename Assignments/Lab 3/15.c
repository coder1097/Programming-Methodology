#include <stdio.h>

void getInput(int *);
void printPrimes(int);

int main(){
	int n;
	int *n_ptr = &n;

	getInput(n_ptr);
	printPrimes(n);
}

void getInput(int *n_ptr){
	do{
		printf("Enter n: ");
		scanf("%d",n_ptr);
	}while(*n_ptr < 2);
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