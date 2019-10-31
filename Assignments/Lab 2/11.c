#include <stdio.h>
int main(){
	int inp;

	do{
		printf("Enter input: ");
		scanf("%d",&inp);

		if(inp>0){
			int rev_num=0,tmp;

			tmp=inp;
			while(tmp>0){
				rev_num = rev_num*10 + tmp%10;
				tmp /= 10;
			}

			if(rev_num == inp) printf("%d is a Palindrome",inp);
			else printf("%d is not a Palindrome",inp);
		}
		
	}while(inp <= 0);
}