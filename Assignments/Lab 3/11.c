#include <stdio.h>

void getInput(int *);
int checkPalindrome(int);
void output(int,int);

int main(){
	int n;
	int *n_ptr = &n;

	getInput(n_ptr);
	int isPalindrome = checkPalindrome(n);
	output(n, isPalindrome);
}

void getInput(int *n_ptr){
	do{
		printf("Enter n: ");
		scanf("%d",n_ptr);
	}while(*n_ptr <= 0);
}

int checkPalindrome(int n){
	int rev_num=0,tmp;

	tmp=n;
	while(tmp>0){
		rev_num = rev_num*10 + tmp%10;
		tmp /= 10;
	}

	if(rev_num == n) return 1;
	else return 0;
}

void output(int n, int res){
	if(res == 1) printf("%d is a Palindrome",n);
	else printf("%d is not a Palindrome", n);
}


		
	
