#include<stdio.h>
int main()
{
	int marks;
	printf("Please Enter your marks:\n");
	scanf("%d",&marks);
	if (marks>100 || marks<0)
	printf("Invalid marks!! Please recheck your data.\n");
	
	else if(marks>=90 && marks <=100)
	printf("Congratulations! You have score an A Grade\n");
	
	else if(marks>=80 && marks<=89)
	printf("Congratulations! You have scored a B Grade\n");
	
	else if(marks>=70 && marks<=79)
	printf("You have scored a C Grade\n");
	
	else if(marks>=60 && marks<=69)
	printf("You have scored a D Grade\n");
	
	else if(marks<60)
	printf("You have scored a F Grade. Work Harder next time!");
	
	return 0;
}
