#include <stdio.h>
#include <string.h>

int Count(char string[])
{
    int count;
    int i = 0;
    while (string[i] != '\n')
    {
        count++;
        i++;
    }
    return count;
}

int main()
{
    char string[100];
    printf("\nEnter string : ");
    fgets(string, 100, stdin);
    
    int length = strlen(string) - 1;
    printf("String length - Use built-in function = %d", length);

    printf("\nString length - Don't use built-in function = %d", Count(string));

    printf("\n");

    return 0;
}