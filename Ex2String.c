#include <stdio.h>
#include <string.h>

int CheckPalindrome(char string[], int length)
{
    for (int i = 0; i < length; i++){
        if (string[i] != string[length - i - 1]){
            return 0;
            break;
        }
    }
    return 1;
}

int main()
{
    char string[100];
    printf("\nEnter string : ");
    fgets(string, 100, stdin);

    int length = strlen(string) - 1;
    if (CheckPalindrome(string, length) == 0){
        printf("\nAsymmetric String");
    }
    else if (CheckPalindrome(string, length) == 1){
        printf("\nSymmetric String");
    }

    printf("\n");

    return 0;
}