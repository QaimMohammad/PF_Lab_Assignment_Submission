#include<stdio.h>
int main(){
	int number,i;
	unsigned long long factorial=1;
	printf("Please Enter The Number!\n");
	scanf("%d",&number);
	
	if (number<0)
	printf("Invalid Input!");
	else {
		for(i=1;i<=number;i++){
		
		factorial*=i;
		
		}
		printf("The factorial of %d is %llu:\n",number,factorial);
	}
	return 0;
	
}
