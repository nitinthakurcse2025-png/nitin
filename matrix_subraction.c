#include <stdio.h>


int subs(int arr1[][100],int arr2[][100],int arr[][100],int row, int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            arr[i][j] =  arr1[i][j] - arr2[i][j];
        }
    }
}



int main(){
    int row,col,arr1[100][100],arr2[100][100],arr[100][100];
    printf("Enter size of row: ");
    scanf("%d",&row);
    printf("Enetr size of column: ");
    scanf("%d",&col);
    printf("Enter the elements of 1st array: ");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter the elements of 2st array: ");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    
    subs(arr1,arr2,arr,row,col);

    printf("Subtracted array: \n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}