#include <stdio.h>

int main(){
	int moneyReceived, choice;

	printf("Enter money: ");
	scanf("%d",&moneyReceived);
	printf("Enter choice: ");
	scanf("%d",&choice);

	if(choice == 1){
		if(moneyReceived >= 3000){
			if(moneyReceived > 3000) printf("Du %d\n",moneyReceived-3000);
			printf("Coca");
		}else{
			printf("Error");
		}
	}else if(choice == 2){
		if(moneyReceived >= 6000){
			if(moneyReceived > 6000) printf("Du %d\n",moneyReceived-6000);
			printf("Tra xanh");
		}else{
			printf("Error");
		}
	}else if(choice == 3){
		if(moneyReceived >= 4000){
			if(moneyReceived > 4000) printf("Du %d\n",moneyReceived-4000);
			printf("Sting");
		}else{
			printf("Error");
		}
	}else if(choice == 4){
		if(moneyReceived >= 5000){
			if(moneyReceived > 5000) printf("Du %d\n",moneyReceived-5000);
			printf("Sua tuoi");
		}else{
			printf("Error");
		}
	}else{
		if(moneyReceived >= 3000){
			if(moneyReceived > 3000) printf("Du %d\n",moneyReceived-3000);
			printf("Nuoc suoi");
		}else{
			printf("Error");
		}
	}
}