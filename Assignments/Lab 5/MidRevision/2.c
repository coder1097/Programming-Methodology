#include <stdio.h>
int main(){
	int d,fee;
	
	printf("Enter d: ");
	scanf("%d",&d);
	
	if(d <= 1){
		fee = 18;
	}else{
		if(d <= 10){
			fee = 18+(d-1)*8;
		}else if(d <= 30){
			fee = 18+9*8+(d-10)*6;
		}else{
			fee = 18+72+120+(d-30)*4;
		}
	}
	
	printf("Fee: %d000", fee);
	
}