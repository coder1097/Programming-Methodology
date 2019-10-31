#include <stdio.h>
int main(){
	int a,fDig, lDig;
	
	do{
		printf("Enter num: ");
		scanf("%d",&a);
		
		if(a>0){
			lDig = a%10;
			
			while(a>0){
				if(a<10) 
					fDig=a;
				a /= 10;
			}
			
			printf("First digit: %d\n",fDig);
			printf("Last digit: %d\n",lDig);

			break;
		}
	}while(a <= 0);
}