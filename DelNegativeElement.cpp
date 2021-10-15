#include <stdio.h>

const int MAX = 100;

void ArrayInput(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("\narr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}

void Delete(int arr[], int &n){
    for (int i = 0; i < n; i++){
        if (arr[i] < 0){
            for (int j = i; j < n - 1; j++){
                arr[j] = arr[j+1];
            }
            n--;
        }
    }
}

void ArrayOutput(int arr[], int n){
    printf("\nArray before delete : ");
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

    Delete(arr, n);

    printf("\n========ArrayOutput========\n");
    ArrayOutput(arr, n);

    printf("\n\n");

    return 0;
}