#include<stdio.h>
int main(){
	float percentage;
	char grade;
	printf("Please Enter Your Percentage!:\n");
	scanf("%f",&percentage);
	 
	grade= (percentage>=90) ? 'A' :
		   (percentage>=80) ? 'B' :
		   (percentage>=70) ? 'C' :
		   (percentage>=60) ? 'D' : 'F';
		
		printf("Your Grade is: %c\n",grade);
		
return 0;
		   	
}
