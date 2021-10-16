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

void DescendingMatrixRow2(int arr[][max], int row, int column){
    int temp;
    printf("Descending Matrix Row 2 : ");
    for(int j = 0; j < column; j++){
        for (int k = j +1; k < column; k++){
            if (arr[1][j] < arr[1][k]){
                temp = arr[1][j];
                arr[1][j] = arr[1][k];
                arr[1][k] = temp;
            }
        }    
    }
    for(int j = 0; j < column; j++){
        printf("%d ", arr[1][j]);
    }
}

int SumMatrix(int arr[][max], int row, int column){
    int sum = 0;
    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            sum += arr[i][j];
        }
    }
    return sum;
}

int MaxMatrix(int arr[][max], int row, int column){
    int max = arr[0][0];
    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            if (arr[i][j] > max){
                max = arr[i][j];
            }
        }
    }
    return max;
}

int MinDivisible3(int arr[][max], int row, int column){
    int min, k;
    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            if(arr[i][j] % 3 == 0){
                min = arr[i][j];
                k = 1;
                break;
            }
        }
    }
    if (k == 1){
        for (int i = 0; i < row; i++){
            for (int j = 0; j < column; j++){
                if(arr[i][j] % 3 == 0 && arr[i][j] < min){
                    min = arr[i][j];
                }
            }
        }
        return min;
    }
    return -1;
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

    printf("\n========DescendingMatrixRow2========\n");
    DescendingMatrixRow2(arr, row, column);

    printf("\n\n========Matrix Sum========\n");
    printf("Sum of elements in the matrix = %d", SumMatrix(arr, row, column));

    printf("\n\n========Matrix Max========\n");
    printf("The maximum value in the matrix = %d", MaxMatrix(arr, row, column));

    printf("\n\n========Matrix Min & Divisible 3========\n");
    if (MinDivisible3(arr, row, column) == -1){
        printf("Doesn't exist the value divisible 3");
    }
    else printf("The minimum value divisible 3 = %d", MinDivisible3(arr, row, column));
    
    printf("\n");

    return 0;
}