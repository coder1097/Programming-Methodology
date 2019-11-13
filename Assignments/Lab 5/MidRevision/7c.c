#include <stdio.h>

int main(){
	int n,rev_num,tmp,cout=0;

	do{
		cout++;
		printf("Enter n: ");
		scanf("%d",&n);
	}while(n<1 && cout<5);

	tmp = n;
	while(tmp>0){
		rev_num = rev_num*10 + tmp%10;
		tmp /= 10;
	}

	if(rev_num == n) printf("%d is a palindrome",n);
	else printf("%d is not a palindrome",n);
}