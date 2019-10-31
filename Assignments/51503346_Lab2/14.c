#include <stdio.h>

int main(){
	int inp,sum=1;

	do{
		printf("Enter input: ");
		scanf("%d",&inp);

		if(inp>0){
			if(inp == 1){
				printf("1 is not a perfect number");	
			}else{
				for(int i=2; i*i<=inp;i++){
					if(inp%i == 0){
						if(i*i != inp) sum += i+inp/i;
						else sum += i;
					} 
				}
				if(sum == inp) printf("%d is a perfect number",inp);
				else printf("%d is not a perfect number",inp);
			}
		}
	}while(inp <= 0);
}