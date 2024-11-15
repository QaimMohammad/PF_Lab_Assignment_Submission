#include<stdio.h>
 
 void bubblesort(int array[],int n){
	if(n==1) return;
	for(int i=0;i<n-1;i++){
		if(array[i]>array[i+1]){
		
		 int temp = array[i];
         array[i] = array[i + 1];
         array[i + 1] = temp;
		  }
	}
	bubblesort(array,n-1);
 }
 int main() {
    int arr[] = {5, 1, 4, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubblesort(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
    
    
