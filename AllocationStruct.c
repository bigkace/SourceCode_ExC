#include <stdio.h>
#include <stdlib.h>

struct person
{
    int age;
    float score;
    char name[30];
};

int main()
{
    struct person *ptr;
    
    int n, i;
    printf("Enter the number of persons : ");
    scanf("%d", &n);

    ptr = (struct person*)malloc(n * sizeof(struct person));

    for (i = 0; i < n; i++)
    {
        printf("Enter first name, age and score respectively : ");
        scanf("%s %d %f", &(ptr + i)->name, &(ptr + i)->age, &(ptr + i)->score);
    }

    printf("\nDisplaying infor mation : ");
    printf("\nName \t Age \t Score\t");
    for (i = 0; i < n; i++)
    {
        printf("\n%s \t %d \t %.2f\t", (ptr + i)->name, (ptr + i)->age, (ptr + i)->score);
    }

    printf("\n");

    free(ptr);

    return 0;
}