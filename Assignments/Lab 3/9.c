#include <stdio.h>

void getInput(int *);
void swapFALDigits(int *);
void print(int);

int main(){
	int n;
	
	getInput(&n);
	swapFALDigits(&n);
	print(n);
}

void getInput(int *n){
	do{
		printf("Enter n: ");
		scanf("%d",n);
	}while(*n < 10);
}

void swapFALDigits(int *n){
	int fDig,lDig,cout=0,tmp,mul=1;
	
	tmp = *n;

	lDig = tmp%10;
	
	while(tmp>0){
		if(tmp<10){
			fDig=tmp;
		}
		cout++;
		tmp /= 10;
	}
	
	while(cout>1){
		mul *= 10;
		cout--;
	}

	*n = *n-fDig*mul+lDig*mul-lDig+fDig;
}

void print(int n){
	printf("Number after swap: %d",n);
}