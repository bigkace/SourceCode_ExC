#include <stdio.h>
#include <string.h>
 
int main()
{
    char name[80];

    printf("Enter your name : ");
    
    fgets(name, sizeof(name), stdin);

    name[strlen(name) - 1] = '\0';

    printf("String before reverse : %s\n", name);
 
    printf("String after reverse  : %s", strrev(name));
 
    return 0;
}