#include <stdio.h>

const int max = 100;

void ArrayInput(int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}

int PrimeNumCheck(int arr[], int n){
    printf("\nPrime Number : ");
    for (int i = 0; i < n; i++){
        int count = 0;
        for (int j = 2; j < arr[i]; j++){
            if (arr[i] % j == 0){
                count += 1;
            }
        }
        if (arr[i] != 1 && count == 0){
            printf("%d ", arr[i]);
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

    PrimeNumCheck(arr, n);
}