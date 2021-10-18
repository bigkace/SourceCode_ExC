#include <stdio.h>
#include <string.h>

int WordCount(char string[], int length)
{
    int count;
    if (string[0] == ' ')
    {
        count = 0;
    }
    else if (string[0] != ' ')
    {
        count = 1;
    }
    
    for (int i = 0; i < length; i++)
    {
        if(string[i] == ' ' && string[i+1] != ' ' && string[i+1] != '\n'){
            count++;
        }
    }
    
    return count;
}

void Correct(char string[], int length)
{
    int first = 0, last = length - 1;

    while (first < last && string[first] == ' ')
    {
        first++;
    }
    while (first < last && string[last] == ' ')
    {
        last++;
    }
    
    if (string[first] >= 'a' && string[first] <= 'z')
    {
        string[first] -= 32;
    }

    for (int i = first; i <= last; i++)
    {
        if (string[i] != string[first])
        {
            if (string[i] >= 'A' && string[i] <= 'Z')
            {
                string[i] += 32;
            }
        }

        if (i + 1 <= last)
        {
            if (string[i] == string[i+1] && string[i] == ' ')
            {
                continue;
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

    printf("\nWord Count = %d", WordCount(string, length));

    printf("\n\nNormalized string : ");
    Correct(string, length);

    printf("\n");

    return 0;
}