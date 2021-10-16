#include <stdio.h>
#include <stdbool.h>

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

void DeleteRowMatrix(int arr[][max], int &row, int column, int index){
    for (int i = index; i < row; i++){
        for (int j = 0; j < column; j++){
            arr[i][j] = arr[i+1][j];
        }
    }
    row--;
}

void DeleteColumnMatrix(int arr[][max], int row, int &column, int index){
    for (int i = 0; i < row; i++){
        for (int j = index; j < column; j++){
            arr[i][j] = arr[i][j+1];
        }
    }
    column--;
}

int main(){
    int arr[max][max];

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

    printf("\n========Matrix Input========\n");
    MatrixInput(arr, row, column);

    printf("\n========Matrix Input Table========\n");
    MatrixInputTable(arr, row, column);

    printf("\n========DeleteRowOrColumnMatrix========\n");
    int k, index;
    printf("\nDo you want to delete rows or column? \nRow = 0\nColumn = 1\nEnter the number : ");
    scanf("%d", &k);
    if (k == 0){
        printf("Enter the index of rows you want to delete : ");
        scanf("%d", &index);
        DeleteRowMatrix(arr, row, column, index);
        printf("\nMatrix after delete : \n");
        MatrixInputTable(arr, row, column);
        return 0;
    }
    else if (k == 1){
        printf("Enter the index of columns you want to delete : ");
        scanf("%d", &index);
        DeleteColumnMatrix(arr, row, column, index);
        printf("\nMatrix after delete : \n");
        MatrixInputTable(arr, row, column);
        return 0;
    }

}