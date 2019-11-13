#include <stdio.h>
#include <math.h>

int main(){
	int a,b,c;
	float p,s;

	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);
	printf("Enter c: ");
	scanf("%d",&c);

	if(a>0 && b>0 && c>0 && a+b>c && a+c>b && b+c>a){
		p = (float)(a+b+c)/2;
		s = sqrt(p*(p-a)*(p-b)*(p-c));
		
		printf("Chu vi: %f\n",p*2);
		printf("Dien tich: %f\n",s);

		if(a == b == c) printf("Tam giac deu");
		else if(a == b || a == c || b == c) printf("Tam giac can");
		else if(a*a == b*b+c*c || b*b == a*a+c*c || c*c == a*a+b*b) printf("Tam giac vuong");
		else printf("Tam giac thuong");
	}else{
		printf("Error");
	}
}