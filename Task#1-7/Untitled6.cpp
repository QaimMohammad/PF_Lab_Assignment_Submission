#include<stdio.h>
int main()
{
	int number1, number2;
	printf("Please Enter the Value of number1:\n");
	scanf("%d",&number1);
	printf("Please Enter the Value of number2:\n");
	scanf("%d",&number2);
	
	if (number1>number2){
		if (number1>100){
			printf("Number1 is significantly larger than Number2\n");
		}
		else {
			printf("Number1 is larger than Number2 but smaller than 100\n");
		}
	
	}
	else if(number1<number2){
		if(number1<0){
			printf("number1 is smaller than number2 and is negative\n");
		}
		else{
			printf("number1 is smaller than number2 and is positive\n");
		
		}
	}
	else if (number1=number2){
		printf("Both Numbers are Equal\n");
		
	}
	return 0;
}
