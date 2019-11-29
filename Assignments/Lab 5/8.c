#include <stdio.h>
#include <string.h>

int indexOf(char [],char []);
int main(){
	char s[100],word[100];

	printf("String: ");
	fgets(s,100,stdin);
	printf("Word: ");
	fgets(word,100,stdin);

	int pos=indexOf(s,word);
	if(pos != -1)
		printf("Found at position %d",pos);
	else
		printf("Not Found");
}

int indexOf(char s[], char word[]){
	int s_len=strlen(s)-1, w_len=strlen(word)-1;
	int j, flag=0;

	for(int i=0; i<s_len; i++){
		if(i+w_len-1 > s_len-1) break;
		j=i;

		for(int z=0; z<w_len;z++){
			if(s[j++] == word[z]){
				flag=1;
			}else{
				flag=0;
				break;
			}
		}

		if(flag==1) return i+1;
	}

	return -1;
}