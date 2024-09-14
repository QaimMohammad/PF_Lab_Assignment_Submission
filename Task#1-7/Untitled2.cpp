#include<stdio.h>
int main()
{
	float units,result,ElectricityBill;
	printf("Please Enter your Units:\n");
	scanf("%f",&units);
	
	if (units<=30){
	
	result=units * 0.60;
	}
	else if (units>30 && units<=110){
	
	result=30 * 0.60 + (units-30) * 0.85;
	}
	else if (units>110 && units<=210){
		
    result=(30 * 0.60) + (80 * 0.85) +(units-110) * (1.30);
	}
	else if (units>210){
		
	result=units * 1.60;
	}
	ElectricityBill= result * 115/100;
	printf("ElectricityBill:\n%0.2f", ElectricityBill);
	
	return 0;
}
