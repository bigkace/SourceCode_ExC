#include <stdio.h>
#include <string.h>

void Titlecase(char string[], int length)
{
    strlwr(string);

    if (string[0] >= 'a' && string[0] <= 'z')
    {
        string[0] -= 32;
        printf("%c", string[0]);
    }

    for (int i = 1; i < length; i++)
    {
        if (string[i] == ' ' && string[i+1] != ' ')
        {
            if (string[i+1] >= 'a' && string[i+1] <= 'z')
            {
                string[i+1] -= 32;
            }
        }
        printf("%c", string[i]);
    }
}

int main()
{
    char string[100];
    printf("\nEnter string : ");
    fgets(string, 100, stdin);

    int length = strlen(string) - 1;

    strlwr(string);
    printf("\nString lowercase (Built-in) : ");
    puts(string);

    strupr(string);
    printf("\nString uppercase (Built-in) : ");
    puts(string);

    printf("\nString Titlecase : ");
    Titlecase(string, length);

    printf("\n");

    return 0;    
}