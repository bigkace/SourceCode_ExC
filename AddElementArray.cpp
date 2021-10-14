#include <stdio.h>

const int MAX = 100;

void ArrayInput(int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("\narr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}

void ArrayOutput(int arr[], int n){
    printf("\nArray : ");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}

void AddElement(int arr[], int &n, int val, int pos){
    if (n >= MAX){
        printf("\nThe array has been overloaded cannot add");
        return;
    }

    if (pos > n){
        pos = n;
    }
    else if (pos < 0){
        pos = 0;
    }

    for (int i = n; i > pos; i--){
        arr[i] = arr[i-1];
    }
    
    arr[pos] = val;

    n++;
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
    
    printf("\n========ArrayBeforeInsert========\n");
    ArrayOutput(arr, n);

    printf("\n\n========Insert========\n");
    int pos, val;
    printf("\nEnter the value you want to insert : ");
    scanf("%d", &val);
    printf("\nEnter the position you want to insert : ");
    scanf("%d", &pos);
    AddElement(arr, n, val, pos);

    printf("\n========ArrayAfterInsert========\n");
    ArrayOutput(arr, n);

    printf("\n\n");

    return 0;
}