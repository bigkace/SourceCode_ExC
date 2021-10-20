#include <stdio.h>
#include <stdlib.h>

void NhapMang(int **a, int dong, int cot)
{
    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
}

void XuatMang(int **a, int dong, int cot)
{
    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int **a, dong, cot, i;

    printf("\nNhap vao so dong : ");
    scanf("%d", &dong);
    printf("\nNhap vao so cot : ");
    scanf("%d", &cot);

    a = (int **)malloc(dong * sizeof(int *));
    for (i = 0; i < dong; i++)
    {
        a[i] = (int *)malloc(cot * sizeof(int));
    }

    NhapMang(a, dong, cot);
    printf("\nMang da nhap \n");
    XuatMang(a, dong, cot);

    for (i = 0; i < dong; i++)
    {
        free(a[i]);
    }

    free(a);

    return 0;
}