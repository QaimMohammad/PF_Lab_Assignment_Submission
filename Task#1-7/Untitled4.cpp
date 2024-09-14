#include<stdio.h>
int main()
{
	int n;
	printf("Please Enter the value of n:\n");
	scanf("%d",&n);
	
	if (n<=0)
	printf("Invalid input!");
	
	else if (1<=n && 20>=n )
	{
		switch(n){
			case 1: printf("You Have Entered One\n");          break;
			case 2: printf("You Have Entered Two\n");          break;
			case 3: printf("You Have Entered Three\n");        break;
			case 4: printf("You Have Entered Four\n");         break;
			case 5: printf("You Have Entered Five\n"); 		   break;
			case 6: printf("You Have Entered Six\n");		   break;
			case 7: printf("You Have Entered Seven\n");   	   break;
			case 8: printf("You Have Entered Eight\n");		   break;
			case 9: printf("You Have Entered Nine\n");		   break;
			case 10: printf("You Have Entered Ten\n");  	   break;
			case 11: printf("You Have Entered Eleven\n"); 	   break;
			case 12: printf("You Have Entered Twelve\n");	   break;
			case 13: printf("You Have Entered Thirteen\n");    break;
			case 14: printf("You Have Entered Fourteen\n");    break;
			case 15: printf("You Have Entered Fifteen\n");     break;
			case 16: printf("You Have Entered Sixteen\n");	   break;
			case 17: printf("You Have Entered Seventeen\n");   break;
			case 18: printf("You Have Entered Eighteen\n");    break;
			case 19: printf("You Have Entered Nineteen\n");	   break;
			case 20: printf("You Have Entered Twenty\n"); 	   break;
			
		}
		
     }
    else if (n>20)
    printf("Number is Greater than 20\n");
    
    return 0;
}
