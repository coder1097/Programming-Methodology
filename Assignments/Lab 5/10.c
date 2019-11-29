#include <stdio.h>
#include <string.h>

int main(){
	char s1[100],s2[100];
	int pos;

	printf("String 1: ");
	fgets(s1,100,stdin);
	printf("String 2: ");
	fgets(s2,100,stdin);
	printf("Position: ")
	scanf("%d",&pos);

	int s1_len = strlen(s1);
	int s2_len = strlen(s2);

	printf("String 1 (before): %s",s1);
	concat(s1, s2, s1_len, s2_len,pos);
	printf("String 1 (after): %s",s1);
}

void concat(char s1[], char s2[], int s1_len, int s2_len, int pos){

}