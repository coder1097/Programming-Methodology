#include <stdio.h>
int main(){
	int a,b,c;

	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);
	printf("Enter c: ");
	scanf("%d",&c);

	if(a != 0 && b != 0 && c != 0){
		if(a+b+c == 180) printf("This is a triangle");
		else printf("This is not a triangle");
	}else{
		printf("This is not a triangle");
	}
}