#include<stdio.h>
int main(){
	int mat1[3][3],i,j,rowsum[3],colsum[3];
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Please Enter the Score of Element[%d][%d]\n",i+1,j+1);
			scanf("%d",&mat1[i][j]);
		}
	
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			rowsum[i]+=mat1[i][j];
			colsum[j]+=mat1[i][j];
			
		}
	}
	printf("Sum of each row:\n");
	 for(i=0;i<3;i++){
	 	printf("%d\n",rowsum[i]);
	 }
	 printf("Sum of each colomn:\n");
	 for(j=0;j<3;j++){
	 	printf("%d\n",colsum[j]);
	 }
}

