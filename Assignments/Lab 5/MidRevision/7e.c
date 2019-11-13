#include <stdio.h>
#include <math.h>

int countDigits(int);
int checkArmstrong(int,int);

int main(){
	int n,tmp,sum=0,cout=0, digits, isArmstrong;

	do{
		cout++;
		printf("Enter n: ");
		scanf("%d",&n);
	}while(n<1 && cout<5);

	digits = countDigits(n);
	isArmstrong = checkArmstrong(n,digits);

	if(isArmstrong == 1) printf("%d is an Armstrong number",n);
	else printf("%d is not an Armstrong number",n);
}

int countDigits(int n){
	int digits=0;

	while(n>0){
		digits++;
		n /= 10;
	}

	return digits;
}

int checkArmstrong(int n, int digits){
	int tmp=n,sum=0;

	while(tmp > 0){
		sum += pow(tmp%10,digits);
		tmp /= 10;
	}

	if(sum == n) return 1;
	else return 0;
}