#include <stdio.h>

void getInput(int *);
int checkPrime(int);
void output(int,int);

int main(){
	int n;
	int *n_ptr = &n;

	getInput(n_ptr);
	int isPrime = checkPrime(n);
	output(n,isPrime);
}

void getInput(int *n_ptr){
	do{
		printf("Enter n: ");
		scanf("%d",n_ptr);
	}while(*n_ptr < 2);
}

int checkPrime(int n){
	int flag=1;

	for(int i = 2; i <= n/2; i++){
		if(n%i == 0){
			flag=0;
			break;
		}
	}

	if(flag==1) return 1;
	else return 0;
}

void output(int n,int res){
	if(res == 1) printf("%d is a prime number",n);
	else printf("%d is not a prime number", n);
}