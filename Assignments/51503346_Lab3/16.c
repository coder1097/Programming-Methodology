#include <stdio.h>

void getInput(int *);
void printAmstrongNumbers(int);
int countDigits(int);
int pow(int,int);
int checkAmstrongNum(int);

int main(){
	int n;
	int *n_ptr = &n;

	getInput(n_ptr);
	printAmstrongNumbers(n);
}

void getInput(int *n_ptr){
	do{
		printf("Enter n: ");
		scanf("%d",n_ptr);
	}while(*n_ptr <= 0);
}

void printAmstrongNumbers(int n){
	int isAmstrong;

	for(int i = 1; i <= n;i++){
		isAmstrong = checkAmstrongNum(i);
		if(isAmstrong == 1) printf("%d ",i);
	}
}

int checkAmstrongNum(int n){
	int no_of_digits,tmp,sum=0;

	no_of_digits = countDigits(n);

	tmp=n;
	while(tmp>0){
		sum += pow(tmp%10,no_of_digits);
		tmp /= 10;
	}

	if(sum == n) return 1;
	else return 0;
}

int countDigits(int n){
	int cout=0;

	while(n>0){
		cout++;
		n /= 10;
	}

	return cout;
}

int pow(int x,int y){
	int res = 1;

	while(y>0){
		res *= x;
		y--;
	}

	return res;
}

