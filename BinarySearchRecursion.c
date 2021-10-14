#include <stdio.h>

const int MAX = 100;

void ArrayInput(int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("\narr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}

int Sort(int arr[], int n){
    int key, j, i;
    for ( i = 1; i < n; i++){
        key = arr[i];
        j = i - 1;
        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = key;
    }
}

void ArrayOutput(int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}

int BinarySearchRecursion(int arr[], int start, int end, int search){
    if ( end >= start ){
        int mid = start + (end - start) / 2;
        if (arr[mid] == search){
            return mid;
        }
        if (arr[mid] > search){
            return BinarySearchRecursion(arr, start, mid - 1, search);
        }
        return BinarySearchRecursion(arr, mid + 1, end, search);
    }
    return -1;
}

int main(){
    int arr[MAX];
    
    int n;
    printf("\nEnter the number of elements in the array : ");
    do{
        scanf("%d", &n);
        if (n <= 0 || n > MAX){
            printf("Re-enter the number of elements in the array : ");
        }
    }
    while(n <= 0 || n > MAX);

    printf("\n========ArrayInput========\n");
    ArrayInput(arr, n);

    Sort(arr, n);

    printf("\nSort : ");
    ArrayOutput(arr, n);

    printf("\n\n========BinarySearchRecursion========\n");
    int search;
    printf("\nEnter the number to find the position : ");
    scanf("%d", &search);
    printf("\nThe number to look up belongs to the index : %d", BinarySearchRecursion(arr, 0, n-1, search));
    printf("\n\n");
    
    return 0;
}