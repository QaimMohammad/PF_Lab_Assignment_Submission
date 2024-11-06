#include<stdio.h>
    void sortCol(int matrix[4][4],int col){
    	for(int i=0;i<4;i++){
    		for(int j=0;j<4;j++){
    			if(matrix[j][col]>matrix[j+1][col]){
    				int temp=matrix[j][col];
    				matrix[j][col]=matrix[j+1][col];
    				matrix[j+1][col]=temp;
    		
				}
			}
		}
	}
	int main() {
    int matrix[4][4];

    
    printf("Enter elements of the 4x4 matrix:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    
    for (int col = 0; col < 4; col++) {
        sortCol(matrix, col);
    }

    
    printf("Matrix with each column sorted in ascending order:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf(" %d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
