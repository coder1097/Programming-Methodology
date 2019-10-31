#include <stdio.h>
int main(){
	int n,flag;

	do{
		printf("Enter n: ");
		scanf("%d",&n);

		if(n>1){
			for(int i = 1; i <= n; i++){
				flag=1;

				if(i==1) continue;
				for(int j = 2; j <= i/2; j++){
					if(i%j == 0){
						flag=0;
						break;
					}
				}
				if(flag==1) printf("%d ",i);
			}	
		}
	}while(n < 2);
}