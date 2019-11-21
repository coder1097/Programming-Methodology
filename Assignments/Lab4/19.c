#include <stdio.h>
#define N 100

void readInputs(int [][N], int [][N], int,int,int,int);
int checkEqual(int [][N], int [][N], int,int,int,int);

int main(){
	int a[N][N],b[N][N];
	int a_rows,a_cols,b_rows,b_cols;

	printf("Rows and cols of A and B: ");
	scanf("%d %d %d %d",&a_rows,&a_cols,&b_rows,&b_cols);

	readInputs(a,b,a_rows,a_cols,b_rows,b_cols);
	int isEqual = checkEqual(a,b,a_rows,a_cols,b_rows,b_cols);

	if(isEqual==0){
		printf("Two matrices are not equal");
	}else{
		printf("Two matrices are equal");
	}

}

void readInputs(int a[][N], int b[][N], int a_rows, int a_cols, int b_rows, int b_cols){
	printf("Input matrix A: ");
	for(int i=0; i<a_rows; i++){
		for(int j=0; j<a_cols; j++){
			scanf("%d", &a[i][j]);
		}
	}

	printf("Input matrix B: ");
	for(int i=0; i<b_rows; i++){
		for(int j=0; j<b_cols; j++){
			scanf("%d", &b[i][j]);
		}
	}
}

int checkEqual(int a[][N], int b[][N], int a_rows, int a_cols, int b_rows, int b_cols){

	if(a_rows != b_rows || a_cols != b_cols) return 0;
	else{
		for(int i=0; i<a_rows; i++){
			for(int j=0; j<a_cols; j++){
				if(a[i][j] != b[i][j]) return 0;
			}
		}
	}

	return 1;
}