#include <stdio.h>
int main(){
	int m,h,salary;
	
	printf("Enter m: ");
	scanf("%d",&m);
	printf("Enter h: ");
	scanf("%d",&h);
	
	if(h <= 40){
		salary = m*h;
	}else{
		if(h <= 45){
			salary = m*40 + (h-40)*1.8*m;
		}else{
			salary = m*40 + 5*1.8*m+(h-45)*2.5*m;
		}
	}
	
	printf("Salary: %d", salary);
}