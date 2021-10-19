#include <stdio.h>
#include <string.h>

void EnterStudent(char arr[][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter name's student %d : ",i+1);
        fflush(stdin);
        fgets(arr[i], 100, stdin);
    }
}

void PrintListStudent(char arr[][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\nName's Student %d : %s", i+1, arr[i]);
    }
}

int main()
{
    char arr[1000][100];

    int n;
    do
    {
        printf("\nEnter the number of students in the list (1 < n <= 1000) : ");
        scanf("%d", &n);
    }
    while (n <= 1);

    EnterStudent(arr, n);

    printf("\nLIST STUDENT\n");
    PrintListStudent(arr, n);

    printf("\n");

    return 0;    
}