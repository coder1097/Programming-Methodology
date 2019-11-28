#include <stdio.h>
#include <string.h>

int main(){
	char s[100];

	printf("Enter string: ");
	fgets(s,100,stdin);
	
	int len=0;
	while(1){
		if(s[len] == '\0'){
			len++;
			break;
		}
		len++;
	}
	printf("Length: %d",len);
}