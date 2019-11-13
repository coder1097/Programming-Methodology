#include <stdio.h>

int main(){
	int n,cout=0,flag=1;

	do{
		cout++;
		printf("Enter n: ");
		scanf("%d",&n);
	}while(n<1 && cout<5);

	for(int i=2; i <= n/2; i++){
		if(n%i == 0){
			flag=0;
			break;
		}
	}

	if(flag==1){
		printf("%d is a prime number", n);
	}else{		
		printf("List of prime numbers: ");
		for(int i=2; i < n; i++){
			flag=1;
			for(int j=2; j <= i/2; j++){
				if(i%j == 0){
					flag=0;
					break;
				}
			}
			if(flag == 1) printf("%d ",i);
		}
	}
}