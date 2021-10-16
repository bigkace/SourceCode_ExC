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

void EvenSum(int arr[][max], int row, int column){
    int sum = 0;
    printf("\nEven elements in 2D Array : ");
    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            if (arr[i][j] % 2 == 0){
                printf("%d ", arr[i][j]);
                sum += arr[i][j];
            }
        }
    }
    printf("\nSum of even elements in matrix = %d", sum);
}

void MaxColumn1(int arr[][max], int row, int column){
    int max = arr[0][1];
    for (int i = 1; i < row; i++){
        if (arr[i][1] > max){
            max = arr[i][1];
        }
    }
    printf("\nMax column 1 = %d", max);
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

    printf("\n========PrintEven&Sum========\n");
    EvenSum(arr, row, column);

    printf("\n\n========MaxColumn1========\n");
    MaxColumn1(arr, row, column);

    printf("\n");

    return 0;
}