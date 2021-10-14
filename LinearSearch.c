#include <stdio.h>

const int MAX = 100;

void ArrayInput(int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("\narr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}

int LinearSearch(int arr[], int n){
    int search;
    printf("\n\nEnter the number to find in the array : ");
    scanf("%d", &search);
    for (int i = 0; i < n; i++){
        if (arr[i] == search){
            return i;
        }
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

    printf("\n========LinearSearch========\n");
    printf("\nThe number to look up belongs to the index : %d\n\n", LinearSearch(arr, n));
    

    return 0;
}