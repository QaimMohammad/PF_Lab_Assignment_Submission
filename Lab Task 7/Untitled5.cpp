#include<stdio.h>

int main() {
    int array[20], i;
    
    printf("Enter 20 numbers:\n");
    for (i = 0; i < 20; i++) {
        scanf("%d", &array[i]);
    }
    
    printf("Input array: {");
	for(i=0;i<20;i++){
	
	    printf("%d",array[i]);
	    if(i<19)
	       printf(",");
	}
	printf("}\n");
	
    printf("Array in reverse order:\n");
    for (i = 19; i >= 0; i--) {
        printf("%d ", array[i]);
    }
    
    printf("\n"); 
    return 0;
}

