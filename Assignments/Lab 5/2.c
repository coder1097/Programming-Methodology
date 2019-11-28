#include <stdio.h>
#include <string.h>

int main(){
	char s[100];

	printf("Enter string: ");
	fgets(s,100,stdin);
	//Get string's length
	int len=strlen(s);
	for(int i=len-1;i>=0;i--)
		printf("%c",s[i]);
}