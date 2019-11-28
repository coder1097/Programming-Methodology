#include <stdio.h>

int length(char []);
void concat(char [],char [],int,int);

int main(){
	char s1[100],s2[100];

	printf("Enter string 1: ");
	fgets(s1,100,stdin);
	printf("Enter string 2: ");
	fgets(s2,100,stdin);

	int len1 = length(s1);
	int len2 = length(s2);

	printf("String 1 (before): %s",s1);
	concat(s1,s2,len1,len2);
	printf("String 1 (after): %s", s1);
}

int length(char s[]){
	int len=0;
	
	while(1){
		if(s[len] == '\0'){
			len++;
			break;
		}
		len++;
	}

	return len;
}

void concat(char s1[], char s2[], int s1_len, int s2_len){
	int i;

	if(s1[s1_len-2] == '\n')
		i = s1_len-2;
	else
		i = s1_len-1;
	
	for(int j=0; j<s2_len; j++)
		s1[i++]=s2[j];
}