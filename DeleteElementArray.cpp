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

void DeleteElementVal(int arr[], int &n, int val){
    int pos;
    for (int i = 0; i < n; i++){
        if (arr[i] == val){
            pos = i;
        }
    }
    for (int i = pos; i < n-1; i++){
        arr[i] = arr[i+1];
    }
    n--;
}

void DeleteElementPos(int arr[], int &n, int pos){
    if (pos >= n){
        pos = n - 1;
    }
    else if (pos < 0){
        pos = 0;
    }

    for (int i = pos; i < n-1; i++){
        arr[i] = arr[i+1];
    }

    n--;
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
    
    printf("\n========ArrayBeforeDelete========\n");
    ArrayOutput(arr, n);

    printf("\n\n========Delete========\n");
    int pos, val, number;
    printf("\nDo you want to delete value or position? \nValue = 0 \nPosition = 1 \nEnter the number : ");
    scanf("%d", &number);
    if (number == 0){
        printf("\nEnter the value you want to delete : ");
        scanf("%d", &val);
        DeleteElementVal(arr, n, val);
    }
    else if (number == 1){
        printf("\nEnter the position you want to delete : ");
        scanf("%d", &pos);
        DeleteElementPos(arr, n, pos);
    }

    printf("\n\n========ArrayAfterDelete========\n");
    ArrayOutput(arr, n);

    printf("\n\n");

    return 0;
}