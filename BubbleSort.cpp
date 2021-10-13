#include <stdio.h>

const int MAX = 100;

void ArrayInput(int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("\narr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}

void Swap(int &a, int &b){   /*Tham chiếu*/
    int temp = a;
    a = b;
    b = temp;
}

void BubbleSort(int arr[], int n){
    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]){
                Swap(arr[j], arr[j+1]);
            }
        }
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

    BubbleSort(arr, n);
    PrintArray(arr, n); 
}
