#include <stdio.h>

int main(){
	float mathM,physicsM,chemistryM,biologyM,computerM,per;

	printf("Enter math score: ");
	scanf("%f",&mathM);
	printf("Enter physics score: ");
	scanf("%f",&physicsM);
	printf("Enter chemistry score: ");
	scanf("%f",&chemistryM);
	printf("Enter biology score: ");
	scanf("%f",&biologyM);
	printf("Enter computer score: ");
	scanf("%f",&computerM);

	per = ((float)(mathM+physicsM+chemistryM+biologyM+computerM)/50)*100;
	
	
	if(per > 90) printf("Percentage: %.1f and Grade: A",per);
	else if(per > 80) printf("Percentage: %.1f and Grade: B",per);
	else if(per > 70) printf("Percentage: %.1f and Grade: C",per);
	else if(per > 60) printf("Percentage: %.1f and Grade: D",per);
	else if(per > 40) printf("Percentage: %.1f and Grade: E",per);
	else printf("Percentage: %.1f and Grade: F",per);
}