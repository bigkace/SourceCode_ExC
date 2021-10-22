/*Bai 16
#include <stdio.h>
#include <math.h>

int main()
{
    int n, x;
    float sumT = 0;
    printf("Nhap x = ");
    scanf("%d", &x);
    printf("Nhap n = ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        for (int j = 1; j <= i; j++)
        {
            sum += j;
        }
        sumT += pow(x, i) / (float)sum;
    }

    printf("Tong = %.2f", sumT);

    return 0;
}*/

/*Bai 17
#include <stdio.h>
#include <math.h>

int main()
{
    int n, x;
    float sumT = 0;
    printf("Nhap n = ");
    scanf("%d", &n);
    printf("Nhap x = ");
    scanf("%d", &x);

    for (int i = 1; i <= n; i++)
    {
        int gt = 1;
        for (int j = 1; j <= i; j++)
        {
            gt *= j;
        }
        sumT += pow(x, i) / (float)gt;
    }

    printf("Tong = %.2f", sumT);

    return 0;
}*/

/*Bai 18
#include <stdio.h>
#include <math.h>

int main()
{
    int x, n;
    float sumT = 0;
    printf("Nhap x = ");
    scanf("%d", &x);
    printf("Nhap n = ");
    scanf("%d", &n);

    for (int i = 1; i <= (n * 2); i++)
    {
        if (i % 2 == 0)
        {
            int gt = 1;
            for (int j = 1; j <= i; j++)
            {
                gt *= j;
            }
            sumT += pow(x, i) / (float)gt;
        }
    }

    printf("Tong = %.2f", sumT + 1);

    return 0;
}*/

/*Bai 19
#include <stdio.h>
#include <math.h>

int main()
{
    int x, n;
    float sumT = 0;
    printf("Nhap x = ");
    scanf("%d", &x);
    printf("Nhap n = ");
    scanf("%d", &n);

    for (int i = 1; i <= (n * 2 + 1); i++)
    {
        if (i % 2 != 0)
        {
            int gt = 1;
            for (int j = 1; j <= i; j++)
            {
                gt *= j;
            }
            sumT += pow(x, i) / (float)gt;
        }
    }

    printf("Tong = %.2f", sumT + 1);

    return 0;
}*/

/*Bai 20 - 27
#include <stdio.h>

void LietKe(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
        }
    }
}

int TongF(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    return sum;
}

int TichF(int n)
{
    int tich = 1;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            tich *= i;
        }
    }
    return tich;
}

int CountF(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    return count;
}

void LietKeO(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i % 2 != 0)
            {
                printf("%d ", i);
            }
        }
    }
}

int SumE(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i % 2 == 0)
            {
                sum += i;
            }
        }
    }
    return sum;
}

int TichO(int n)
{
    int tich = 1;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i % 2 != 0)
            {
                tich *= i;
            }
        }
    }
    return tich;
}

int CountE(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i % 2 == 0)
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    int n;
    do
    {
        printf("\nNhap so n (0 < n)= ");
        scanf("%d", &n);        
    } while (n <= 0);

    printf("\n*********Bai 20**********\n");
    printf("Uoc so cua %d la : ", n);
    LietKe(n);

    printf("\n\n*********Bai 21**********\n");
    printf("Tong cac uoc so cua %d = %d", n, TongF(n));

    printf("\n\n*********Bai 22**********\n");
    printf("Tich cac uoc so cua %d = %d", n, TichF(n));

    printf("\n\n*********Bai 23**********\n");
    printf("So luong cac uoc so cua %d = %d", n, CountF(n));

    printf("\n\n*********Bai 24**********\n");
    printf("Cac uoc so le cua %d : ", n);
    LietKeO(n);

    printf("\n\n*********Bai 25**********\n");
    printf("Tong cac uoc chan cua %d = %d", n, SumE(n));

    printf("\n\n*********Bai 26**********\n");
    printf("Tich cac uoc le cua %d = %d", n, TichO(n));

    printf("\n\n*********Bai 27**********\n");
    printf("So luong uoc so chan cua %d = %d", n, CountE(n));

    printf("\n");

    return 0;  
}*/

/*Bai 28
#include <stdio.h>

int main()
{
    int n, sum = 0;
    do
    {
        printf("Nhap so n ( n > 0) = ");
        scanf("%d", &n);
    }while(n <= 0);

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }

    printf("Tong cac uoc so nho hon %d = %d", n, sum);

    return 0;
}*/

/*Bai 29
#include <stdio.h>

int main()
{
    int n;
    do
    {
        printf("Nhap n (n > 0) = ");
        scanf("%d", &n);
    } while (n <= 0);

    int max = 1;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i % 2 != 0)
            {
                if (i > max)
                {
                    max = i;
                }
            }
        }
    }

    printf("Uoc so le lon nhat cua so nguyen duong %d = %d", n, max);
    
    return 0;
}*/

/*Bai 30*/
#include <stdio.h>

int main()
{
    int n, sum = 0;
    do
    {
        printf("Nhap n (n > 0) = ");
        scanf("%d", &n);
    } while (n <= 0);

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }

    if (sum == n)
    {
        printf("%d la so hoan hao", n);
        return 0;
    }
    else if (sum != n)
    {
        printf("%d khong la so hoan hao", n);
        return 0;
    }
}
