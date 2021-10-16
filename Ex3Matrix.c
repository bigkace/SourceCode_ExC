#include <stdio.h>

const int max = 10;

void MatrixInput(int arr[][max], int row, int column){
    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }
}

void MatrixInputTable(int arr[][max], int row, int column){
    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

void MatrixSum(int arr1[][max], int arr2[][max], int arr3[][max], int row, int column){
    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            arr3[i][j]  = arr1[i][j] + arr2[i][j];
        }
    }
}

int main(){
    int arr1[max][max], arr2[max][max], arr3[max][max];

    int row, column;
    printf("\nEnter row : ");
    do{
        scanf("%d", &row);
        if (row <= 0 || row > max){
            printf("\nRe-enter row (1 <= row <= 10) : ");
        }
    }
    while(row <= 0 || row > max);
    printf("\nEnter column : ");
    do{
        scanf("%d", &column);
        if (column <= 0 || column > max){
            printf("\nRe-enter column (1 <= column <= 10) : ");
        }
    }
    while(column <= 0 || column > max);

    printf("\n========Matrix1 Input========\n");
    MatrixInput(arr1, row, column);

    printf("\n========Matrix2 Input========\n");
    MatrixInput(arr2, row, column);

    printf("\n========Matrix1 Input Table========\n");
    MatrixInputTable(arr1, row, column);

    printf("\n========Matrix2 Input Table========\n");
    MatrixInputTable(arr2, row, column);

    MatrixSum(arr1, arr2, arr3, row, column);
    printf("\n========MatrixSum Input Table========\n");
    MatrixInputTable(arr3, row, column);

    printf("\n");

    return 0;
}