#include <stdio.h>
#include <stdbool.h>

int countF(int n)
{
    int count = 0;
    while( n > 0)
    {
        n /= 10;
        count++;
    }
    return count;
}

int sumF(int n)
{
    int sum = 0;
    while ( n > 0)
    {
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}

int tichF(int n)
{
    int tich = 1;
    while (n > 0)
    {
        tich *= (n % 10);
        n /= 10;
    }
    return tich;
}

int countO(int n)
{
    int count = 0;
    while (n > 0)
    {
        int k = n % 10;
        if (k % 2 != 0)
        {
            count++;
        }
        n /= 10;
    }
    return count; 
}

int sumE(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int k = n % 10;
        if (k % 2 == 0)
        {
            sum += k;
        }
        n /= 10;
    }
    return sum; 
}

int tichO(int n)
{
    int tich = 1;
    while (n > 0)
    {
        int k = n % 10;
        if (k % 2 != 0)
        {
            tich *= k;
        }
        n /= 10;
    }
    return tich; 
}

int searchFirst(int n)
{
    int k;
    while ( n > 0)
    {
        k = n % 10;
        n /= 10;
    }
    return k;
}

int swapN(int n)
{
    int k = 0;
    while (n > 0)
    {
        k = (k * 10) + (n % 10);
        n /= 10;
    }
    return k;
}

int searchMax(int n)
{
    int k, max = 0;
    while (n > 0)
    {
        k = n % 10;
        if (k > max)
        {
            max = k; 
        }
        n /= 10;
    }
    return max;
}

int searchMin(int n)
{
    int k, min = 9;
    while (n > 0)
    {
        k = n % 10;
        if (k < min)
        {
            min = k; 
        }
        n /= 10;
    }
    return min;
}

int countMax(int n)
{
    int k, count = 0;
    int max = searchMax(n);
    while (n > 0)
    {
        k = n % 10;
        if (k == max)
        {
            count++; 
        }
        n /= 10;
    }
    return count;
}

int countMin(int n)
{
    int k, count = 0;
    int min = searchMin(n);
    while (n > 0)
    {
        k = n % 10;
        if (k == min)
        {
            count++; 
        }
        n /= 10;
    }
    return count;
}

int countFirst(int n)
{
    int k, count = 0;
    int first = searchFirst(n);
    while (n > 0)
    {
        k = n % 10;
        if (k == first)
        {
            count++;
        }
        n /= 10;
    }
    return count;
}

int checkNO(int n)
{
    int k, count = 0;
    while (n > 0)
    {
        k = n % 10;
        if (k % 2 == 0)
        {
            count++;
        }
        n /= 10;
    }
    if (count == 0)
    {
        return 1;
    }
    else if (count != 0)
    {
        return 0;
    }
}

int checkNE(int n)
{
    int k, count = 0;
    while (n > 0)
    {
        k = n % 10;
        if (k % 2 != 0)
        {
            count++;
        }
        n /= 10;
    }
    if (count == 0)
    {
        return 1;
    }
    else if (count != 0)
    {
        return 0;
    }
}

int checkNsymmetrical(int n)
{
    int k = countF(n);
    int arr[k];
    int i;
    for (i = (k - 1); i >= 0; i--)
    {
        if (n < 0)
        {
            break;
        }
        arr[i] = (n % 10);
        n /= 10;
    }

    for (i = 0; i < k; i++)
    {
        if (arr[i] == arr[k - i - 1])
        {
            continue;
        }
        else if (arr[i] != arr[k - i -1])
        {
            return 0;
        }
    }

    return 1;
}

int checkNascending(int n)
{
    int k = countF(n);
    int arr[k];
    int i;
    for (i = (k - 1); i >= 0; i--)
    {
        if (n < 0)
        {
            break;
        }
        arr[i] = (n % 10);
        n /= 10;
    }

    for (i = 0; i < k; i++)
    {
        if (i == k - 1)
        {
            break;
        }
        else if (arr[i] + 1 == arr[i + 1])
        {
            continue;
        }
        else if (arr[i] + 1 != arr[i + 1])
        {
            return 0;
        }
    }
    return 1;
}

int checkNdescending(int n)
{
    int k = countF(n);
    int arr[k];
    int i;
    for (i = (k - 1); i >= 0; i--)
    {
        if (n < 0)
        {
            break;
        }
        arr[i] = (n % 10);
        n /= 10;
    }

    for (i = 0; i < k; i++)
    {
        if (i == k - 1)
        {
            break;
        }
        else if (arr[i] - 1 == arr[i + 1])
        {
            continue;
        }
        else if (arr[i] - 1 != arr[i + 1])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    do
    {
        printf("Nhap n (n > 0) = ");
        scanf("%d", &n);
    }while(n <= 0);

    //printf("\n**********Bai 43************\n");
    //printf("So luong chu so cua %d = %d", n, countF(n));
//
    //printf("\n\n**********Bai 44************\n");
    //printf("Tong cac chu so cua %d = %d", n, sumF(n));
    //
    //printf("\n\n**********Bai 45************\n");
    //printf("Tich cac chu so cua %d = %d", n, tichF(n));
//
    //printf("\n\n**********Bai 46************\n");
    //printf("So luong cac chu so le cua %d = %d", n, countO(n));
//
    //printf("\n\n**********Bai 47************\n");
    //printf("Tong cac chu so chan cua %d = %d", n, sumE(n));
//
    //printf("\n\n**********Bai 48************\n");
    //printf("Tich cac chu so le cua %d = %d", n, tichO(n));
//
    //printf("\n\n**********Bai 49************\n");
    //printf("Chu so dau tien cua %d = %d", n, searchFirst(n));
//
    //printf("\n\n**********Bai 50************\n");
    //printf("Chu so dao nguoc cua %d = %d", n, swapN(n));

    //printf("\n\n**********Bai 51************\n");
    //printf("Chu so lon nhat cua %d = %d", n, searchMax(n));

    //printf("\n\n**********Bai 52************\n");
    //printf("Chu so nho nhat cua %d = %d", n, searchMin(n));

    //printf("\n\n**********Bai 53************\n");
    //printf("So luong chu so lon nhat cua %d = %d", n, countMax(n));

    //printf("\n\n**********Bai 54************\n");
    //printf("So luong chu so nho nhat cua %d = %d", n, countMin(n));

    //printf("\n\n**********Bai 55************\n");
    //printf("So luong chu so dau tien cua %d = %d", n, countFirst(n));

    /*printf("\n\n**********Bai 56************\n");
    if (checkNO(n) == 1)
    {
        printf("So %d toan chu so le", n);
    }
    else if (checkNO(n) == 0)
    {
        printf("So %d co chua so chan", n);
    }*/

    /*printf("\n\n**********Bai 57-58************\n");
    if (checkNE(n) == 1)
    {
        printf("So %d toan chu so chan", n);
    }
    else if (checkNE(n) == 0)
    {
        printf("So %d co chua so le", n);
    }*/

    /*printf("\n\n**********Bai 59************\n");
    if (checkNsymmetrical(n) == 1)
    {
        printf("So %d doi xung", n);
    }
    else if (checkNsymmetrical(n) == 0)
    {
        printf("So %d khong doi xung", n);
    }*/
    
    printf("\n\n**********Bai 60************\n");
    if (checkNascending(n) == 1)
    {
        printf("So %d tang dan tu trai sang phai", n);
    }
    else if (checkNascending(n) == 0)
    {
        printf("So %d khong tang dan tu trai sang phai", n);
    }

    printf("\n\n**********Bai 61************\n");
    if (checkNdescending(n) == 1)
    {
        printf("So %d giam dan tu trai sang phai", n);
    }
    else if (checkNdescending(n) == 0)
    {
        printf("So %d khong giam dan tu trai sang phai", n);
    }

    return 0;
}