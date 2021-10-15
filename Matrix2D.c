#include <stdio.h>

const int MAX = 100;

void MatrixInput(int arr[][MAX], int row, int column){
    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            printf("\narr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

void MatrixOutput(int arr[][MAX], int row, int column){
    printf("\nMatrix 2D\n\n");
    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

void Search(int arr[][MAX], int row, int column, int search){
    int count;
    for (int i = 0; i < row; i ++){
        for (int j = 0; j < column; j++){
            if(arr[i][j] == search){
                printf("\nThe value to look for is located in row %d column %d", i, j);
                count += 1;
            }
        }
    }
    if (count == 0){
        printf("\nThe value doesn't exist in the 2D matrix ");
    }
}

int main(){
    int arr[MAX][MAX];
    
    int row, column;
    printf("\nEnter row : ");
    do{
        scanf("%d", &row);
        if (row <= 0 || row > MAX){
            printf("\nRe-enter row : ");
        }
    }
    while( row <= 0 || row > MAX);
    printf("\nEnter column : ");
    do{
        scanf("%d", &column);
        if (column <= 0 || column > MAX){
            printf("\nRe-enter column : ");
        }
    }
    while( column <= 0 || column > MAX);

    printf("\n========MatrixInput========\n");
    MatrixInput(arr, row, column);

    printf("\n========MaxtrixOutput========\n");
    MatrixOutput(arr, row, column);

    printf("\n========MatrixSearch========\n");
    int search;
    printf("\nEnter the number to search : ");
    scanf("%d", &search);
    Search(arr, row, column, search);
    printf("\n===========================================\n");
    int k;
    do{
        printf("\nDo you want to continue searching? \nCancel = 0\nContinue = 1\nEnter the number : ");
        scanf("%d", &k);
        if (k == 1){
            printf("\nEnter the number to search : ");
            scanf("%d", &search);
            Search(arr, row, column, search);
        }
        printf("\n===========================================\n");
    }
    while (k == 1);

    printf("\n");

    return 0;
}
