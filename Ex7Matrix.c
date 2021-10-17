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

void SwapRow(int arr[][max], int row, int column, int index1, int index2){
    if ((index1 >= 0 && index1 < max)&&(index2 >= 0 && index2 < max)){
        for (int j = 0; j < column; j++ ){
            int temp = arr[index1][j];
            arr[index1][j] = arr[index2][j];
            arr[index2][j] = temp;
        }
    }
}

void SwapColumn(int arr[][max], int row, int column, int index1, int index2){
    if ((index1 >= 0 && index1 < max) && (index2 >= 0 && index2 < max)){
        for (int i = 0; i < row; i++){
            int temp = arr[i][index1];
            arr[i][index1] = arr[i][index2];
            arr[i][index2] = temp;
        }
    }
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

    printf("\n========Matrix Replace Row========\n");
    int k, index1, index2;
    printf("\nDo you want to swap rows or columns ? \nRow = 0\nColumn = 1\nEnter the number : ");
    scanf("%d", &k);
    if (k == 0){
        printf("Enter the two rows you want to swap : ");
        scanf("%d %d", &index1, &index2);
        SwapRow(arr, row, column, index1, index2);
        printf("\nMatrix after swap : \n");
        MatrixInputTable(arr, row, column);
        return 0;
    }
    else if (k == 1){
        printf("Enter the two columns you want to swap : ");
        scanf("%d %d", &index1, &index2);
        SwapColumn(arr, row, column, index1, index2);
        printf("\nMatrix after swap : \n");
        MatrixInputTable(arr, row, column);
        return 0;
    }
}