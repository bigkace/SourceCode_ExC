#include <stdio.h>

const int MAX = 100;

int ArrayInput(int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("\narr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}

int InsertionSort(int arr[], int n){
    int key, j;
    for (int i = 1; i < n; i++){
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = key;
    }
}

int PrintArrayOutput(int arr[], int n){
    printf("\nInsertion Sort: ");
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
            printf("Re-enter the number of elements in the array : ");
        }
    }
    while(n <= 0 || n > MAX);

    printf("\n========ArrayInput========\n");
    ArrayInput(arr, n);

    InsertionSort(arr, n);

    printf("\n========ArrayOutput========\n");
    PrintArrayOutput(arr, n);

}