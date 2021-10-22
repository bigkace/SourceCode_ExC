/*Bai 31
#include <stdio.h>

int main()
{
    int n, count;
    do
    {
        printf("Nhap n (n > 0) = ");
        scanf("%d", &n);
    } while (n <= 0);

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }

    if (count == 0)
    {
        printf("%d la so nguyen to ", n);
        return(0);
    }
    else if (count != 0)
    {
        printf("%d khong la so nguyen to", n);
        return 0;
    }
}*/

/*Bai 32
#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    do
    {
        printf("Nhap n (n > 0) = ");
        scanf("%d", &n);
    } while (n <= 0);

    int k = sqrt(n);
    if (pow(k,2) == n)
    {
        printf("%d la so chinh phuong", n);
        return 0;
    }
    else if (pow(k, 2 != n))
    {
        printf("%d khong la so chinh phuong", n);
        return 0;
    }
}*/

/*Bai 33
#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    float sum = 0;
    do
    {
        printf("Nhap n (n > 0) = ");
        scanf("%d", &n);
    } while (n <= 0);

    for (int i = 1; i <= n; i++)
    {
        sum += 2;
        sum = (float)sqrt(sum);
    }

    printf("Tong = %.2f", sum);

    return 0;
}*/

/*Bai 34
#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    float sum = 0;
    do
    {
        printf("Nhap n (n > 0) = ");
        scanf("%d", &n);
    } while (n <= 0);

    for (int i = 1; i <= n; i++)
    {
        sum += i;
        sum = sqrt(sum);
    }

    printf("Tong = %.2f", sum);

    return 0;
}*/

/*Bai 35
#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    float sum = 0;
    do
    {
        printf("Nhap n (n > 0) = ");
        scanf("%d", &n);
    } while (n <= 0);

    for (int i = n; i >= 1; i--)
    {
        sum += i;
        sum = sqrt(sum);
    }

    printf("Tong = %.2f", sum);

    return 0;
}*/

/*Bai 36
#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    float sum = 0;
    do
    {
        printf("Nhap n (n > 0) = ");
        scanf("%d", &n);
    } while (n <= 0);

    for (int i = 1; i <= n; i++)
    {
        int gt = 1;
        for (int j = 1; j <= i; j++)
        {
            gt *= j;
        }
        sum += gt;
        sum = sqrt(sum);
    }

    printf("Tong = %.2f", sum);

    return 0;
}*/

/*bai 37
#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    float sum = 0;
    do
    {
        printf("Nhap n (n > 0) = ");
        scanf("%d", &n);
    } while (n <= 0);

    for (int i = 2; i <= n; i++)
    {
        float k = 1 / (float)i;
        sum += i;
        sum = pow(sum, k);
    }

    printf("Tong = %.2f", sum);

    return 0;
}*/

/*Bai 38
#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    float sum = 0;
    do
    {
        printf("Nhap n (n > 0) = ");
        scanf("%d", &n);
    } while (n <= 0);

    for (int i = 1; i <= n; i++)
    {
        float k = 1 / (float)(i + 1);
        sum += i;
        sum = pow(sum, k);
    }

    printf("Tong = %.2f", sum);

    return 0;
}*/

/*Bai 39
#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    float sum = 0;
    do
    {
        printf("Nhap n (n > 0) = ");
        scanf("%d", &n);
    } while (n <= 0);

    for (int i = 1; i <= n; i++)
    {
        float k = 1 / (float)(i + 1);
        int gt = 1;
        for (int j = 1; j <= i; j++)
        {
            gt *= j;
        }
        sum += gt;
        sum = pow(sum, k);
    }

    printf("Tong = %.2f", sum);

    return 0;
}*/

/*Bai 40
#include <stdio.h>
#include <math.h>

int main()
{
    int n, x;
    float sum = 0;
    do
    {
        printf("Nhap n (n > 0) = ");
        scanf("%d", &n);
    } while (n <= 0);
    printf("Nhap x = ");
    scanf("%d", &x);

    for (int i = 1; i <= n; i++)
    {
        sum += pow(x, i);
        sum = sqrt(sum);
    }

    printf("Tong = %.2f", sum);

    return 0;
}*/

/*Bai 41
#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    float sum = 0;
    do
    {
        printf("Nhap n (n > 0) = ");
        scanf("%d", &n);
    } while (n <= 0);

    for (int i = 1; i <= (n + 1); i++)
    {
        sum = sum + 1;
        sum = 1 / sum;
    }

    printf("Tong = %.2f", sum);

    return 0;
}*/

/*Bai 42*/
#include <stdio.h>

int main()
{
    int n, max = 0;
    do
    {
        printf("Nhap n (n > 0) = ");
        scanf("%d", &n);
    } while (n <= 0);

    for (int i = 1; i <= (n / 2); i++)
    {
        int sum = 0;
        for (int j = 1; j <= i; j++)
        {
            sum += j;
        }
        if (sum < n)
        {
            max = i;
        }
    }

    printf("Gia tri k = %d", max);

    return 0;
}