#include <stdio.h>

const int MAX = 100;

void ArrayInput(int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("\narr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}

int FindbyLoop(int arr[], int n){
    int max1, max2;
    if (arr[0] > arr[1]){
        max1 = arr[0];
        max2 = arr[1];
    }
    else{
        max1 = arr[1];
        max2 = arr[0];
    }
    for (int i = 2; i < n; i++){
        if (arr[i] > max1){
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2 && arr[i] != max1){
            max2 = arr[i];
        }
    }
    return max2;
    
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
    
    printf("\n========ArrayOutput========\n");
    printf("\n2nd max = %d\n\n", FindbyLoop(arr, n));

    return 0;
}