#include<stdio.h>
int main()
{
	int number,i=2;
	printf("Please Enter The Number!\n");
	scanf("%d",&number);
	if (number<1)
	printf("Invalid Input");
	else {
		printf("All Even Numbers between 1 & %d are:\n",number);
		while(i<=number){
			printf("%d ", i);
			i+=2;
		}
	}
		return 0;
}
