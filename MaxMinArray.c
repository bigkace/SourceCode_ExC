#include <stdio.h>

const int max = 100;

void ArrayInput(int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}

int Max(int arr[], int n){
    int MAX;
    MAX = arr[0];
    for (int i = 1; i < n; i++){
        if (arr[i] > MAX){
            MAX = arr[i];
        }
    }
    return MAX;
}

int Min(int arr[], int n){
    int MIN;
    MIN = arr[0];
    for (int i = 1; i < n; i++){
        if (arr[i] < MIN){
            MIN = arr[i];
        }
    }
    return MIN;
}

int main(){
    int arr[max];
    int n;
    
    printf("\nNhap so luong phan tu : ");
    do{
        scanf("%d", &n);
        if (n <= 0 || n > max){
            printf("Nhap lai so luong phan tu : ");
        }
    }
    while(n <= 0 || n > max);

    printf("\n========ArrayInput========\n");
    ArrayInput(arr, n);

    printf("\n========ArrayMax========\n");
    printf("Gia tri lon nhat trong mang = %d", Max(arr, n));

    printf("\n\n========ArrayMin=======\n\n");
    printf("Gia tri nho nhat trong mang = %d", Min(arr, n));
}