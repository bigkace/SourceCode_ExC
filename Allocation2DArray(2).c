#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a, dong, cot, i, j;

    printf("\nNhap so dong : ");
    scanf("%d", &dong);
    printf("\nNhap so cot : ");
    scanf("%d", &cot);

    a = (int *)malloc(dong * cot * sizeof(int));

    //Nhap ma tran
    for (i = 0; i < dong; i++)
    {
        for (j = 0; j < cot; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", (a + i*dong + j));
        }
        printf("\n");
    }

    //Xuat ma tran
    for (i = 0; i < dong; i++)
    {
        for (j = 0; j < cot; j++)
        {
            printf("%d\t", *(a + i*dong +j));
        }
        printf("\n");
    }

    free(a);

    return 0;
}