#include <stdio.h>

int findClosetNum(int);
int pow(int,int);
void convertDECtoBIN(int,int);

int main(){
	int inp;

	do{
		printf("Enter input: ");
		scanf("%d",&inp);

		if(inp>0){
			int n = findClosetNum(inp);
			//printf("%d",n);
			convertDECtoBIN(inp,n);
		}
	}while(inp <= 0);	
}

int findClosetNum(int n){
	int i=0;

	while(1){
		if(n == pow(2,i)) return i;
		else if(n < pow(2,i)) return --i;
		else i++;
	}
}

int pow(int x, int y){
	int res=1;

	while(y>0){
		res *= x;
		y--;
	}
	
	return res;
}

void convertDECtoBIN(int inp, int n){
	while(n >= 0){
		if(inp >= pow(2,n)){
			printf("1");
			inp -= pow(2,n);
		}else{
			printf("0");
		}
		n--;
	}
}