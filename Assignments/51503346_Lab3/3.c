#include <stdio.h>

void printTable(int);

int main(){
	printTable(9);
}

void printTable(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			printf("%d x %d = %d\n",i,j,i*j);
		}
		printf("\n");
	}
	
}