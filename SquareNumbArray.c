#include <stdio.h>
#include <math.h>

const int MAX = 100;

void ArrayInput(int arr[], int N){
    for (int i = 0; i < N; i++){
        printf("\narr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}

int SquareNumber(int arr[], int N){
    printf("\nSquare Number in the array : ");
    for (int i = 0; i < N; i++){
        int sqr = sqrt(arr[i]);
        if (sqr * sqr == arr[i]){
            printf("%d ", arr[i]);
        }
    }
}

int main(){
    int arr[MAX];
    
    int N;
    printf("\nEnter the number of elements in the array : ");
    do{
        scanf("%d", &N);
        if (N <= 0 || N > MAX){
            printf("\nRe-enter the number of elements int the array : ");
        }
    }
    while(N <= 0 || N > MAX);

    printf("\n========ArrayInput========\n");
    ArrayInput(arr, N);

    printf("\n========SquareNumber========\n");
    SquareNumber(arr, N);

    printf("\n\n");

    return 0;
}