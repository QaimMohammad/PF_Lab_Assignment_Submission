#include<stdio.h>
int main()
{
	float time;
	printf("Please Enter the current time in 24-HOUR Format:\n");
	scanf("%f",&time);
	
	if (time>24.00 || time<0){
	
	printf("Invalid input!");
     }
	 else if (time<12.00 && time >=6.00){
	 
	 printf("Good Morning!\n");
     }
	 else if (time>=12.00 && time<18.00){
	 
	 printf("Good Afternoon!\n");
      }
	 else if (time>=18.00 && time<24.00){
	 
	 printf("Good Evening!\n");
      }
	 else if (time>=0.00 && time<6.00){
	  
	 printf("Good Night!\n");
       }
	 return 0;
}
