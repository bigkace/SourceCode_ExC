/* Nhap tu ban phim mang so nguyen n phan tu
Tinh trung binh cong cac so le o vi tri chan*/

#include <stdio.h>

const int MAX = 100;

void ArrayInput(int arr[], int N){
    for (int i = 0; i < N; i++){
        printf("\narr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}

int Calculate(int arr[], int N){
    int sum = 0, count = 0;
    for (int i = 0; i < N; i++){
        if (arr[i] % 2 != 0 && i % 2 == 0){
            sum += arr[i];
            count += 1;
        }
    }
    float average = sum / (float)count;
    printf("\nAverage = %.2f", average);
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

    printf("\n========Average========\n");
    Calculate(arr, N);

    printf("\n\n");

    return 0;
}