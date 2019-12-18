//============================================================================
// Name        : main.c
// Author      : Vinh Vo
// Version     : 1.0
// Copyright   : by Vinh Vo
// Description : Initial code for Assignment
// Created on  : 15.10.2017
//============================================================================

#include "musketeer.c"

/**********************************************************************
 * Name: readFile
 * Target: Read data from input file to corresponding variables
 * Input: Input variables hp,d,s
 * Result: 1 if successfully done, otherwise return 0
**********************************************************************/
bool readFile(int *hp1, int* hp2, int*q1, int* q2, int *d, char* file_name)
{
	FILE *in;
	in = fopen(file_name, "r");
	fscanf(in, "%d", &(*hp1));
	fscanf(in, "%d", &(*hp2));
	fscanf(in, "%d", &(*q1));
	fscanf(in, "%d", &(*q2));
	fscanf(in, "%d", &(*d));
	fclose(in);

	if (*hp1 < 1 || *hp1 > 999) return false;
	if (*hp2 < 1 || *hp2 > 900) return false;
	if (*q1 < 1 || *q1 > 1000) return false;
	if (*q2 < 1 || *q2 > 1000) return false;
	if (*d < 1 || *d > 1000) return false;

	return true;
}
/**********************************************************************
 * Name: display
 * Target: Display the value of fOut in format of 0.XXX
 * Input: Calculated Result pR
**********************************************************************/
void display(float pR){
	float a = 0, b = 1;
	
	if(pR == a || pR == b)	
		printf("%.0f\r\n", pR);
	else
		printf("%.2f\r\n", pR);
}

/**********************************************************************
 * Name: main
 * Target: Implements the main application
 **********************************************************************/
int main(int argc, char *argv[]){

	//Declare variables
	int hp1 = 0;
	int hp2 = 0;
	int q1 = 0;
	int q2 = 0;
	int d = 0;
	float pR = 0.0;
	
	//Input data
	if(readFile(&hp1, &hp2, &q1, &q2, &d, argv[1])){
		pR = computeSurvivalRate(&hp1, &hp2, &q1, &q2, &d);
	}

	//Output result
	display(pR);
	
	return 2019;
}