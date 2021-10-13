#include <stdio.h>

const int max = 100;

void ArrayInput(int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}

int SumEven(int arr[], int n){
    int sum = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] % 2 == 0){
            sum += arr[i];
        }
    }
    return sum;
}

int SumOdd(int arr[], int n){
    int sum = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] % 2 != 0){
            sum += arr[i];
        }
    }
    return sum;
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

    printf("\n========SumEven========\n");
    printf("\nTong cac gia tri chan trong mang = %d\n\n", SumEven(arr, n));

    printf("\n========SumOdd========\n");
    printf("\nTong cac gia tri le trong mang = %d\n\n", SumOdd(arr, n));

}