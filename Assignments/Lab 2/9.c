#include <stdio.h>
int main(){
	int fDig,lDig,cout,inp,tmp,newNum;
	
	do{
		printf("Enter input: ");
		scanf("%d",&inp);

		if(inp > 0){
			if(inp < 10){
				printf("Number after swap: %d",inp);
			}else if(inp == 10){
				printf("Number after swap: 1");
			}else{
				tmp = inp;
				
				lDig = tmp%10;
				//printf("%d",lDig);
				
				while(tmp>=10){
					cout++;
					tmp /= 10;
				}
				fDig=tmp;
				//printf("%d",fDig);
				
				int m=1;
				while(cout>0){
					m *= 10;
					cout--;
				}
				//printf("%d",m);
				
				newNum= inp-(fDig*m)+(lDig*m)-lDig+fDig;
				printf("Number after swap: %d",newNum);
			}
		}
	}while(inp <= 0);
	
}