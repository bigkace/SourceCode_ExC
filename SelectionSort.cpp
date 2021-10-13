#include <stdio.h>             //Sort Ascending

const int MAX = 100;

void ArrayInput(int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("\narr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}

void Swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void SelectionSort(int arr[], int n){            
    for (int i = 0; i < n; i++){                // Sort Descending
        int indexMin = i;                       //indexMax = i
        for (int j = i+1; j < n; j++){            
            if (arr[j] < arr[indexMin]){        // if (arr[j] > arr[indexMax])
                indexMin = j;                   // indexMax = j
            }
        }
        Swap(arr[indexMin], arr[i]);
    }
}

void PrintArray(int arr[], int n){
    printf("\nBubble Sort : ");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}

int main(){
    int arr[MAX];
    int n;
    
    printf("Enter the number of elements in the array :");
    do{
        scanf("%d", &n);
        if (n <= 0 || n > MAX){
            printf("Re-enter the number of the elements in the array: ");
        }
    }
    while(n <= 0 || n > MAX);

    printf("\n========ArrayInput=========\n");
    ArrayInput(arr, n);

    SelectionSort(arr, n);
    PrintArray(arr, n);
}
