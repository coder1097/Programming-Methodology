#include <stdio.h>
int main(){
	int inp=375;
	int years,weeks,days;

	years=inp/365;
	inp %= 365;
	
	weeks= inp/7;
	days= inp%7;

	printf("Years: %d, Weeks: %d, Days: %d",years,weeks,days);


}