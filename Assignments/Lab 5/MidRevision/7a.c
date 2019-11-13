#include <stdio.h>

int main(){
	int n,rev_num,cout=0;

	do{
		cout++;
		printf("Enter n: ");
		scanf("%d",&n);
	}while(n<1 && cout<5);

	while(n>0){
		rev_num = rev_num*10 + n%10;
		n /= 10;
	}

	printf("Reversed num: %d",rev_num);
}