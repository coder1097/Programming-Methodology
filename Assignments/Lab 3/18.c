#include <stdio.h>

void getInput(int *);
int findClosetNum(int);
int pow(int,int);
void convertDECtoBIN(int,int);

int main(){
	int n,cNum;
	int *n_ptr = &n;

	getInput(n_ptr);
	cNum = findClosetNum(n);		
	convertDECtoBIN(n, cNum);

}

void getInput(int *n_ptr){
	do{
		printf("Enter n: ");
		scanf("%d",n_ptr);
	}while(*n_ptr <= 0);
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