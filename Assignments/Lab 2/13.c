#include <stdio.h>

int countDigits(int);
int pow(int, int);

int main(){
	int inp,no_of_digits,sum=0,tmp;

	do{
		printf("Enter input: ");
		scanf("%d",&inp);

		if(inp>0){
			no_of_digits = countDigits(inp);

			tmp = inp;
			while(tmp>0){
				sum += pow(tmp%10,no_of_digits);
				tmp /= 10;
			}

			if(sum == inp) printf("%d is an Amstrong number",inp);
			else printf("%d is not an Amstrong number",inp);
		}
	}while(inp <= 0);
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