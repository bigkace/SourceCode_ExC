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

int MaxMatrix(int arr[][max], int row, int column){
    int max = arr[0][0];
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            if (arr[i][j] > max){
                max = arr[i][j];
            }
        }
    }
    return max;
}

int MinMatrix(int arr[][max], int row, int column){
    int min = arr[0][0];
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            if (arr[i][j] < min){
                min = arr[i][j];
            }
        }
    }
    return min;
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

    printf("\n========MatrixInput========\n");
    MatrixInput(arr, row, column);

    printf("\n========MatrixInputTable========\n");
    MatrixInputTable(arr, row, column);

    printf("\n========MaxMatrix========\n");
    printf("\nMax matrix = %d", MaxMatrix(arr, row, column));

    printf("\n\n========MinMatrix========\n");
    printf("\nMin matrix = %d", MinMatrix(arr, row, column));

    printf("\n");

    return 0;
}