#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 100

void getInputs(int [][N], int [][N],int,int);
void subtract(int [][N], int [][N], int [][N],int,int);
void print(int [][N],int,int);

int main(){
	int a[N][N], b[N][N], c[N][N];
	int rows,cols;

	printf("Rows and columns: ");
	scanf("%d %d",&rows,&cols);

	getInputs(a,b,rows,cols);
	
	printf("Matrix A:\n");
	print(a,rows,cols);
	printf("Matrix B:\n");
	print(b,rows,cols);
	
	subtract(a,b,c,rows,cols);
	printf("Output:\n");
	print(c,rows,cols);
}

void getInputs(int a[][N], int b[][N], int rows, int cols){
	srand(time(NULL));
	for(int i=0; i<rows; i++){
		for(int j=0; j<cols;j++){
			a[i][j] = rand()%1001;
		}
	}

	for(int i=0; i<rows; i++){
		for(int j=0; j<cols;j++){
			b[i][j] = rand()%101;
		}
	}
}

void subtract(int a[][N], int b[][N], int c[][N], int rows, int cols){
	for(int i=0; i<rows; i++){
		for(int j=0; j<cols; j++){
			c[i][j] = a[i][j]-b[i][j];
		}
	}
}

void print(int a[][N], int rows, int cols){

	for(int i=0; i<rows; i++){
		for(int j=0; j<cols; j++){
			printf(" %d ",a[i][j]);
		}
		printf("\n");
	}
}