#include <stdio.h>
#define N 100

void readInputs(int [][N], int,int);
void transpose(int [][N], int *,int *);
void print(int [][N], int,int);
void swap(int *, int *);

int main(){
	int a[N][N];
	int rows,cols;

	printf("Rows and cols: ");
	scanf("%d %d",&rows,&cols);

	readInputs(a,rows,cols);
	print(a,rows,cols);
	transpose(a,&rows,&cols);
	print(a,rows,cols);
}

void readInputs(int a[][N], int rows, int cols){
	printf("Input matrix elements: ");
	for(int i=0; i<rows; i++){
		for(int j=0; j<cols; j++){
			scanf("%d", &a[i][j]);
		}
	}
}

void transpose(int a[][N], int *rows, int *cols){
	swap(rows,cols);

	for(int i=0; i<*rows; i++){
		for(int j=i+1; j<*cols; j++){
			if(i == j) continue;
			swap(&a[i][j], &a[j][i]);
		}
	}
}

void swap(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void print(int a[][N], int rows, int cols){
	printf("Output:\n");

	for(int i=0; i<rows; i++){
		for(int j=0; j<cols; j++){
			printf(" %d ", a[i][j]);
		}
		printf("\n");
	}
}