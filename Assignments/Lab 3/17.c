#include <stdio.h>

void getInput(int *);
void printPerfectNumbers(int);
int checkPerfectNum(int);

int main(){
	int n;

	getInput(&n);
	printPerfectNumbers(n);
}

void getInput(int *n){
	do{
		printf("Enter n: ");
		scanf("%d",n);
	}while(*n <= 0);
}

void printPerfectNumbers(int n){
	printf("List of perfect numbers: ");

	for(int i=1; i<=n; i++){
		int isPerfect = checkPerfectNum(i);
		if(isPerfect == 1) printf("%d ",i);
	}
}

int checkPerfectNum(int n){
    int sum=1;
    
	if(n == 1){
		return 0;	
	}else{
		for(int i=2; i*i<=n;i++){
			if(n%i == 0){
				if(i*i != n) sum += i+n/i;
				else sum += i;
			} 
		}
		if(sum == n) return 1;
		else return 0;
	}
}