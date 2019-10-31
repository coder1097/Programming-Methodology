#include <stdio.h>

void getInput(int *);
void swapFALDigits(int *);
void print(int);

int main(){
	int n;
	int *n_ptr = &n;
	
	getInput(n_ptr);
	swapFALDigits(n_ptr);
	print(n);
}

void getInput(int *n_ptr){
	do{
		printf("Enter n: ");
		scanf("%d",n_ptr);
	}while(*n_ptr < 10);
}

void swapFALDigits(int *n_ptr){
	int fDig,lDig,cout=0,tmp,mul=1;
	
	tmp = *n_ptr;

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

	*n_ptr = *n_ptr-fDig*mul+lDig*mul-lDig+fDig;
}

void print(int n){
	printf("Number after swap: %d",n);
}