#include<stdio.h>
int main()
{
	int size,i,sum=0;
	printf("Enter the size of the array\n");
	scanf("%d",&size);
	
	int array[size];
	
	printf("Enter %d Elements=\n",size);
	for(i=0;i<size;i++)
	   scanf("%d",&array[i]);
	   
	printf("Input array: {");
	for(i=0;i<size;i++){
	
	    printf("%d",array[i]);
	    if(i<size-1)
	       printf(",");
	}
	printf("}\n");
	
	for(i=0;i<size;i++)
	   sum+=array[i];
	
	printf("Sum of array: %d\n", sum);
    
    return 0;
}
	
	
	    
