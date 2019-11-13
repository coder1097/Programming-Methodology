#include <stdio.h>
#include <math.h>

int main(){
	float d,rad,xA,yA;
	
	printf("Enter radius: ");
	scanf("%f",&rad);
	printf("Enter xA: ");
	scanf("%f",&xA);
	printf("Enter yA: ");
	scanf("%f",&yA);
	
	d = sqrt(xA*xA+yA*yA);
	
	if(d > rad) printf("A nam ngoai duong tron");
	else if(d < rad) printf("A nam trong duong tron");
	else printf("A nam tren duong tron");
}