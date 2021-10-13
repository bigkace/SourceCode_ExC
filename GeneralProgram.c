#include <stdio.h>

const int MAX = 100;

int ArrayInput(int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("\narr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}

int ArrayOutput(int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("\narr[%d] = %d", i, arr[i]);
    }
}

int SearchPosition(int arr[], int n){
    int search;
    printf("\nEnter the number to find the position : ");
    scanf("%d", &search);
    for (int i = 0; i < n; i++){
        if(arr[i] == search){
            return i;
        }
    }
    return -1;
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

    printf("\n========SearchPosition========\n");
    printf("\nThe number to look up belongs to the index : %d\n\n", SearchPosition(arr, n));

}