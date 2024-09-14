#include<stdio.h>
int main()
{
	int original_price;
	float discounted_price,amount_saved_by_discount;
	printf("Please Enter the Cost of Shopping:\n");
	scanf("%d",&original_price);
	if (original_price<1500){
		amount_saved_by_discount=original_price * 7/100;
		printf("Amount saved by discount:%0.2f\n", amount_saved_by_discount); 
		
		discounted_price=original_price * 93/100;
		printf("Discounted Price:%0.2f\n", discounted_price);
	}
	else if (original_price>=1500 && original_price<=3000){
		amount_saved_by_discount=original_price * 12/100;
		printf("Amount saved by discount:%0.2f\n", amount_saved_by_discount);
		
		discounted_price=original_price * 88/100;
		printf("Discounted Price:%0.2f\n", discounted_price);
	}
		
	else if (original_price>=3000 && original_price<=5000){
		amount_saved_by_discount=original_price * 22/100;
		printf("Amount saved by discount:%0.2f\n", amount_saved_by_discount);
		
		discounted_price=original_price * 78/100;
		printf("Discounted Price:%0.2f\n", discounted_price);
}
    else if (original_price>5000){
    	amount_saved_by_discount=original_price * 30/100;
		printf("Amount saved by discount:%0.2f\n", amount_saved_by_discount);
		
		discounted_price=original_price * 70/100;
		printf("Discounted Price:%0.2f\n", discounted_price);
	}
	return 0;
	}
