#include <stdio.h>
#include <string.h>

int indexOf(char [],char,int []);
int main(){
	char ch,a[100];
	int pos[100]={0};

	printf("String: ");
	fgets(a,100,stdin);
	printf("Character: ");
	ch = getchar();

	int position=indexOf(a,ch,pos);
	if(position != -1){
		printf("Position: ");
		for(int i=0; i<100;i++){
			if(i != 0 && pos[i] == 0) break;
			printf("%d ",pos[i]);
		}
	}else{
		printf("Not Found");
	}
}

int indexOf(char a[], char c, int pos[]){
	int id=0, hasChar=0;
	
	for(int i=0; i<strlen(a);i++){
		if(a[i] == c){
			hasChar=1;
			pos[id++]=i;
		} 
	}

	if(hasChar == 0) return -1;
	else return 0;
}