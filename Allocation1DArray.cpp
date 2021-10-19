#include <stdio.h>
#include <stdlib.h>

void NhapMang(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\narr[%d] = ", i);
        scanf("%d", (arr + i));
    }
}

void XuatMang(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(arr +i));
    }
}

void ThemPhanTu(int *arr, int &n, int value, int pos)
{
    arr = (int *)realloc(arr, (n+1) * sizeof(int));

    if (pos < 0)
    {
        pos = 0;
    }
    else if (pos > n)
    {
        pos = n;
    }

    for (int i = n; i > pos; i--)
    {
        *(arr + i) = *(arr + i - 1);
    }

    *(arr + pos) = value;

    n++;
}

void XoaPhanTu(int *arr, int &n, int pos)
{
    if (pos < 0)
    {
        pos = 0;
    }
    else if (pos > n)
    {
        pos = n;
    }

    for (int i = pos; i < n; i++)
    {
        *(arr + i) = *(arr + i +1);
    }

    arr = (int *)realloc(arr, (n-1) * sizeof(int));

    n--;
}

int main()
{
    int *arr;
    int n;
    do
    {
        printf("\nNhap so luong n = ");
        scanf("%d", &n);
    }
    while (n <= 1);
    //Cap phat dong
    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL)
    {
        printf("CO LOI KHONG THE CAP PHAT BO NHO");
        exit(0);
    }

    NhapMang(arr, n);
    printf("\nMang da nhap : ");
    XuatMang(arr, n);

    printf("\n_________________________________\n");
    int value, pos;
    printf("\nNhap gia tri muon them vao : ");
    scanf("%d", &value);
    printf("\nNhap vi tri muon them vao : ");
    scanf("%d", &pos);
    ThemPhanTu(arr, n, value, pos);
    printf("\nMang sau khi them : ");
    XuatMang(arr, n);

    printf("\n_________________________________\n");
    printf("\nNhap vi tri muon xoa vao : ");
    scanf("%d", &pos);
    XoaPhanTu(arr, n, pos);
    printf("\nMang sau khi xoa : ");
    XuatMang(arr, n);

    printf("\n");

    free(arr);

    return 0;
}