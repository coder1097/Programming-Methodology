#include <stdio.h>
#include <string.h>

void printFirstName(char [],int);
void printLastName(char [],int);

int main(){
	char full_name[100];

	printf("Enter full nume: ");
	fgets(full_name,100,stdin);

	int len=strlen(full_name);

	printFirstName(full_name,len);
	printLastName(full_name,len);
}

void printFirstName(char full_name[], int len){
	for(int i=0;i<len;i++){
		if(full_name[i] == ' ') break;
		printf("%c",full_name[i]);
	}
	printf("\n");
}

void printLastName(char full_name[], int len){
	for(int i=len-2; i>=0; i--){
		if(full_name[i] == ' '){
			int j=i+1;
			while(j<len){
				printf("%c",full_name[j]);
				j++;
			}
			break;
		}
	}
}



