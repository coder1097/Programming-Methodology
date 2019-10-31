#include <stdio.h>

int checkPerfectNum(int);

int main(){
	int n;

	do{
		printf("Enter input: ");
		scanf("%d",&n);

		if(n>0){
			printf("List of perfect numbers: ");

			for(int i=1; i<=n; i++){
				int isPerfect = checkPerfectNum(i);
				if(isPerfect == 1) printf("%d ",i);
			}	
		}
	}while(n <= 0);
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