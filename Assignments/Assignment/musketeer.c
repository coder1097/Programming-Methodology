#ifndef _MUSKETEER_C_
#define _MUSKETEER_C_

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

float computeSurvivalRate(int *hp1, int* hp2, int* q1, int* q2, int *d)
{
	int m,g,numOfM,numOfG,distance,h,p1,p2;
	float p;
	//Rename variable
	m=*hp1;
	g=*hp2;
	numOfM=*q1;
	numOfG=*q2;
	distance=*d; 
	//Compute h
	h=(m+g)%100;
	//Check constraints
	if(distance==1000)
		if(m!=999 && h!=99) return 0;
	if(m==999)
		if(g==888) return 1;
	if(g==888)
		if(m!=777 && m!=888 && m!=900) return 0.01;
	if(m==900 || m==888 || m==777){
		if(g!=888){
			if(m==900)
				if(numOfM>numOfG) return 0.5;
			if(m==888)
				if(m<g) h *= 3;
			if(m==777)
				if(numOfM<numOfG && distance>100) distance=100;
		}
	}	
	//Compute P1 and P2
	if(numOfM>1.5*numOfG && distance <= 300){
		p1=m+((numOfM-numOfG)*distance)/numOfM;
		p2=g;
	}else if(1.5*numOfM<numOfG && distance >= 700){
		p1=m;
		p2=g+((numOfG-numOfM)*(1000-distance))/numOfG;
	}else{
		p1=m;
		p2=g;
	}
	//Compute p(R)
	int num = p1+h-p2;
	int denom = p1+p2; 
	p = (float)num/denom;

	if(p < 0.5)
		if(m==900 && g!=888) return 0.5;

	return p;
}

#endif
