#include <stdio.h>
#include <string.h>

int CheckCharacter(char string[], char character, int length)
{
    for (int i = 0; i < length; i++)
    {
        if (string[i] == character)
        {
            return 1;
        }
    }

    return 0;
}

int CountCharacter(char string[], char character, int length)
{
    int count;

    for (int i = 0; i < length; i++)
    {
        if (string[i] == character)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    char string[100];
    printf("\nEnter string : ");
    fgets(string, 100, stdin);
    
    char character;
    printf("\nEnter character : ");
    scanf("%c", &character);

    int length = strlen(string) - 1;

    if (CheckCharacter(string, character, length) == 1)
    {
        printf("\nThe character exists in the string");
        printf("\n\nNumber of occurrences of the character : %d", CountCharacter(string, character, length));
        printf("\n");
        return 0;
    }
    else if (CheckCharacter(string, character, length) == 0)
    {
        printf("\nThe character does not exist in the string");
        printf("\n");
        return 0;
    }
}