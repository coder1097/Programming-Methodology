#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 100

void readInputs(int [][N], int [][N], int,int,int,int);
int multiply(int [][N], int [][N], int [][N], int,int,int,int,int *,int *);
void print(int [][N],int,int,int);

int main(){
	int a[N][N]={{0}},b[N][N]={{0}},c[N][N]={{0}};
	int a_rows,a_cols,b_rows,b_cols,c_rows,c_cols,flag;

	printf("Rows and cols of A and B: ");
	scanf("%d %d %d %d",&a_rows,&a_cols,&b_rows,&b_cols);

	readInputs(a,b,a_rows,a_cols,b_rows,b_cols);
	flag = multiply(a,b,c,a_rows,a_cols,b_rows,b_cols,&c_rows,&c_cols);
	print(c,c_rows,c_cols,flag);
}

void readInputs(int a[][N], int b[][N], int a_rows,int a_cols, int b_rows, int b_cols){
	srand(time(NULL));
	for(int i=0; i< a_rows; i++){
		for(int j=0; j<a_cols; j++){
			a[i][j] = rand()%101;
		}
	}

	for(int i=0; i< b_rows; i++){
		for(int j=0; j<b_cols; j++){
			b[i][j] = rand()%101;
		}
	}
} 

int multiply(int a[][N], int b[][N], int c[][N], int a_rows,int a_cols, int b_rows, int b_cols, int *c_rows, int *c_cols){

	if(a_cols == b_rows){
		*c_rows = a_rows;
		*c_cols = b_cols;

		for(int i=0;i<*c_rows;i++){
			for(int j=0;j<*c_cols;j++){
				for(int z=0;z<a_cols;z++){
					c[i][j] += a[i][z]*b[z][j];
				}
			}
		}
		return 1;
	}

	return 0;
}

void print(int a[][N], int a_rows, int a_cols, int flag){
	printf("Output:\n");
	if(flag==0){
		printf("-1");
	}else{
		for(int i=0; i<a_rows; i++){
			for(int j=0; j<a_cols; j++){
				printf(" %d ",a[i][j]);
			}
			printf("\n");
		}
	}
	
}