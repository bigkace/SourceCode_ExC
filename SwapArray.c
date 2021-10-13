#include <stdio.h>

const int MAX = 100;

int ArrayInput(int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}

int ArrayOutput(int arr[], int n){
    for (int i = (n-1); i >= 0; i--){
        printf("\n%d\n", arr[i]);
    }
}

int main(){
    int arr[MAX];
    
    int n;
    printf("Enter the number of elements in the array : ");
    do{
        scanf("%d", &n);
        if (n <= 0 || n > MAX){
            printf("Re-enter the number of elements in the array : ");
        }
    }
    while(n <= 0 || n > MAX);

    printf("\n========ArrayInput========\n");
    ArrayInput(arr, n);

    printf("\n========ArrayOutput========\n");
    ArrayOutput(arr, n);

    return 0;
}