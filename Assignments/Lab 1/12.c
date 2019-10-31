#include <stdio.h>
int main(){
	char ch;

	printf("Enter character: ");
	scanf("%c",&ch);

	if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' || ch >= '0' && ch <= '9'){
		printf("%c is alphanumeric",ch);
	}else{
		printf("%c is not alphanumeric",ch);		
	}
}