#include <stdio.h>

int main(){
	int n,cout=0,sumCD=0;

	do{
		cout++;
		printf("Enter n: ");
		scanf("%d",&n);
	}while(n<1 && cout<5);

	for(int i=1; i<n; i++)
		if(n%i == 0) sumCD += i;

	if(sumCD == n) printf("%d is a perfect number",n);
	else printf("%d is not a perfect number");
}