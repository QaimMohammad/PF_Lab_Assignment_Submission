#include<stdio.h>
int main(){
	int mat1[4][4],i,j;
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("Please Enter the Score of Element[%d][%d]\n",i+1,j+1);
			scanf("%d",&mat1[i][j]);
			}
		}
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(mat1[i][j]<0){
				mat1[i][j]=0;
			}
		}
	}
	printf("The Corrected Array:\n");
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
		printf(" %d ",mat1[i][j]);
		}
	 printf("\n");	
	}
}

