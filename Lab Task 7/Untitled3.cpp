#include<stdio.h>
int main()
{
	int size,i,j;
	
	printf("Enter size of the array=\n");
	scanf("%d",&size);
	
	if (size % 2 != 0) {
        printf("Please enter an even size for the array!\n");
         return 1; 
		}
	
	
	int array[size];
	int sum_array[size/2];
	
	printf("Enter %d Elements=\n",size);
	for(i=0;i<size;i++)
	    scanf("%d",&array[i]);
	
	printf("Input array : {");
    for (i = 0; i < size; i++) {
        printf("%d", array[i]);
        if (i < size - 1) {
            printf(","); 
        }
    }
    printf("}\n");
	    
	for(i=0 , j=0; i<size; i+=2, j++){
	
	    sum_array[j]=array[i]+array[i+1];
		}
	
	printf("Pair Sum array : {");
    for (i = 0; i < size / 2; i++) {
        printf("%d", sum_array[i]);
        if (i < size / 2 - 1) {
            printf(",");
        }
    }
    printf("}\n");

return 0;
}
