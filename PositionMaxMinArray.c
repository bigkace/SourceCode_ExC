#include <stdio.h>

const int max = 100;

void ArrayInput(int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}

int PositionMax(int arr[], int n){
    int MAX, i;
    MAX = arr[0];
    for ( i = 1; i < n; i++){
        if (arr[i] > MAX){
            MAX = arr[i];
        }
    }
    for(int j = 0; j < n; j++){
        if (arr[j] == MAX){
            return (j+1);
        }
    }
}

int PositionMin(int arr[], int n){
    int MIN;
    MIN = arr[0];
    for (int i = 1; i < n; i++){
        if (arr[i] < MIN){
            MIN = arr[i];
        }
    }
    for (int j = 0; j < n; j++){
        if (arr[j] == MIN){
            return (j+1);
        }
    }
}

int main(){
    int arr[max];
    int n;
    
    printf("\nEnter the number of elements in the array : ");
    do{
        scanf("%d", &n);
        if (n <= 0 || n > max){
            printf("Re-enter the number of elements in the array : ");
        }
    }
    while(n <= 0 || n > max);

    printf("\n========ArrayInput========\n");
    ArrayInput(arr, n);

    printf("\n========ArrayPositionMax========\n");
    printf("Position of Max in the Array = %d", PositionMax(arr, n));

    printf("\n\n========ArrayPositionMin=======\n\n");
    printf("Position of Min in the Array = %d", PositionMin(arr, n));
}