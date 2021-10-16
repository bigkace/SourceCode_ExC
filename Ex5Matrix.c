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

int CheckPrimeNumb(int a){
    int count = 0;
    for (int i = 2; i < a; i++){
        if (a % i == 0){
            count += 1;
        }
    }
    if (count == 0){
        return true;
    }
    else return false;
}

void PrimeNumMatrix(int arr[][max], int row, int column){
    int count = 0;
    printf("Prime Number in Matrix : ");
    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            if (arr[i][j] != 1 && CheckPrimeNumb(arr[i][j]) == true){
                printf("%d ", arr[i][j]);
                count += 1;
            }
        }
    }
    printf("\nThe number of primes in the matrix = %d", count);
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

    printf("\n========Prime Number Matrix========\n");
    PrimeNumMatrix(arr, row, column);

    printf("\n");

    return 0;
}