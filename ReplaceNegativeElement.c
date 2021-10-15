#include <stdio.h>

const int MAX = 100;

void ArrayInput(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("\narr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}

void Replace(int arr[], int n){
    for (int i = 0; i < n; i++){
        if (arr[i] < 0 ){
            arr[i] = 0;
        }
    }
}

void ArrayOutput(int arr[], int n){
    printf("\nArray before replace : ");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}

int main(){
    int arr[MAX];
    
    int n;
    printf("Enter the number of elements in the array : ");
    do{
        scanf("%d", &n);
        if (n <= 0 || n > MAX){
            printf("Re-enter the number of the elements in the array : ");
        }
    }
    while(n <= 0 || n > MAX);

    printf("\n========ArrayInput========\n");
    ArrayInput(arr, n);

    Replace(arr, n);

    printf("\n========ArrayOutput========\n");
    ArrayOutput(arr, n);

    printf("\n\n");

    return 0;
}