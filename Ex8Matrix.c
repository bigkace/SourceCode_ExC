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

int Max(int arr[][max], int row, int column){
    int max1, max2;
    max1 = arr[0][0];
    for (int i = 0; i < row; i++){
        int j = i;
        if (arr[i][j] > max1){
            max1 = arr[i][j];
        }

    }
    max2 = arr[0][3];
    for (int i = 0; i < row; i++){
        for (int j = column -1; j >= 0; j--){
            if (arr[i][j] > max2){
                max2 = arr[i][j];
            }
        }
    }
    if (max1 > max2){
        return max1;
    }
    else if (max1 < max2){
        return max2;
    }
}

int Min(int arr[][max], int row, int column){
    int min1, min2;
    min1 = arr[0][0];
    for (int i = 0; i < row; i++){
        int j = i;
        if (arr[i][j] < min1){
            min1 = arr[i][j];
        }

    }
    min2 = arr[0][3];
    for (int i = 0; i < row; i++){
        for (int j = column -1; j >= 0; j--){
            if (arr[i][j] < min2){
                min2 = arr[i][j];
            }
        }
    }
    if (min1 < min2){
        return min1;
    }
    else if (min1 > min2){
        return min2;
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

    printf("\n========Max========\n");
    printf("The maximum value on the main diagonal = %d", Max(arr, row, column));

    printf("\n\n========Min========\n");
    printf("The minimum value on the main diagonal = %d", Min(arr, row, column));
    
    printf("\n");

    return 0;
}