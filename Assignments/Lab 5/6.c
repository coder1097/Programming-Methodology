#include <stdio.h>
#include <string.h>

int indexOf(char [],char);
int main(){
	char ch, a[100];

	printf("String: ");
	fgets(a,100,stdin);
	printf("Character: ");
	ch = getchar();

	int pos=indexOf(a,ch);
	if(pos != -1)
		printf("Found at position %d",pos);
	else
		printf("Not Found");
}

int indexOf(char a[], char c){
	int len=strlen(a);

	for(int i=0; i<len; i++){
		if(a[i] == c) return i+1;
	}

	return -1;

}
