#include <stdio.h>

int countDigits(int);
int pow(int,int);
int checkAmstrongNum(int);

int main(){
	int n,isAmstrong;

	do{
		printf("Enter input: ");
		scanf("%d",&n);

		if(n>0){
			for(int i = 1; i <= n;i++){
				isAmstrong = checkAmstrongNum(i);
				if(isAmstrong == 1) printf("%d ",i);
			}
		}
	}while(n <= 0);
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