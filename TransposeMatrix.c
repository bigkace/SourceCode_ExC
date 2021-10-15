#include <stdio.h>

const int max = 10;

void MatrixInput(int arr[][max], int row, int column){
    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            printf("arr[%d][%d] = ", i, j);
            do{
                scanf("%d", &arr[i][j]);
            }
            while (arr[i][j] < 0 || arr[i][j] > 100);
        }
        printf("\n");
    }
}

void TableMatrixInput(int arr[][max], int row, int column){
    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

void TransposeMatrix(int arr[][max], int column, int row){
    for (int i = 0; i < column; i++){
        for (int j = 0; j < row; j++){
            printf("%d\t", arr[j][i]);
        }
        printf("\n");
    }
}

int main(){
    int arr[max][max];
    
    int row, column;
    printf("\nEnter row : ");
    do{
        scanf("%d", &row);
        if (row <= 0 || row > max){
            printf("\nRe-enter row ( 1 <= row <= 10) : ");
        }
    }
    while(row <= 0 || row > max);
    printf("\nEnter column : ");
    do{
        scanf("%d", &column);
        if (column <= 0 || column > max){
            printf("\nRe-enter column ( 1 <= column <= 10) : ");
        }
    }
    while(column <= 0 || column > max);

    printf("\n========MatrixInput========\n");
    MatrixInput(arr, row, column);

    printf("\n========TableMatrixInput========\n");
    TableMatrixInput(arr, row, column);

    printf("\n========TransposeMatrix========\n");
    TransposeMatrix(arr, column, row);

    return 0;
}