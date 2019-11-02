#include <stdio.h>

void getInput(int *);
int checkArmstrongNumber(int);
int countDigits(int);
int pow(int, int);
void output(int,int);

int main(){
	int n;

	getInput(&n);
	int isArmstrong = checkArmstrongNumber(n);
	output(n, isArmstrong);
}

void getInput(int *n){
	do{
		printf("Enter n: ");
		scanf("%d",n);
	}while(*n <= 0);
}

int checkArmstrongNumber(int n){
	int no_of_digits,tmp,sum=0;

	no_of_digits = countDigits(n);

	tmp = n;
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

int pow(int a, int b){
	int res=1;

	while(b>0){
		res *= a;
		b--;
	}
	return res;
}

void output(int n, int res){
	if(res == 1) printf("%d is an Amstrong number", n);
	else printf("%d is not an Amstrong number",n);
}