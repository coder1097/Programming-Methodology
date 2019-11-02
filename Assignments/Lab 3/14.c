#include <stdio.h>

void getInput(int *);
int checkPerfect(int);
void output(int,int);

int main(){
	int n;

	getInput(&n);
	int isPerfect = checkPerfect(n);
	output(n,isPerfect);
}

void getInput(int *n){
	do{
		printf("Enter n: ");
		scanf("%d",n);
	}while(*n <= 0);
}

int checkPerfect(int n){
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

void output(int n,int res){
	if(res == 1) printf("%d is a perfect number",n);
	else printf("%d is not a perfect number", n);
}