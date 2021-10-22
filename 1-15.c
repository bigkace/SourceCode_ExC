/*Bai 1
#include <stdio.h>

int main()
{
    //Nhap vao gia tri n
    int n, sum = 0;
    printf("Nhap gia tri n : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    printf("Tong = %d", sum);

    return 0;
}*/

/*Bai 2
#include <stdio.h>
#include <math.h>

int main()
{
    int n, sum = 0;
    printf("Nhap vao so n : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += pow(i,2);
    }

    printf("S(%d) = %d", n, sum);

    return 0;
}*/

/*Bai 3
#include <stdio.h>

int main()
{
    int n;
    float sum = 0;
    printf("Nhap gia tri n : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += 1 / (float)i;
    }

    printf("S(%d) = %.2f", n, sum);

    return 0;
}*/

/*Bai 4
#include <stdio.h>

int main()
{
    int n;
    float sum = 0;
    printf("Nhap gia tri n : ");
    scanf("%d", &n);

    for (int i = 1; i <= 2*n ; i++)
    {
        if (i % 2 == 0)
        {
            sum += 1 / (float)i;
        }
    }

    printf("S(%d) = %.2f", n, sum);

    return 0;
}*/

/*Bai 5
#include <stdio.h>

int main()
{
    int n;
    float sum = 0;
    printf("Nhap gia tri n : ");
    scanf("%d", &n);

    for (int i = 1; i <= (2 * n + 1); i++)
    {
        if (i % 2 != 0)
        {
            sum += 1 / (float)i;
        }
    }

    printf("S(%d) = %.2f", n, sum);

    return 0;
}*/

/*Bai 6
#include <stdio.h>

int main()
{
    int n;
    float sum = 0;
    printf("Nhap gia tri n : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += (float)1 / (i * (i + 1));
    }

    printf("S(%d) = %.2f", n, sum);

    return 0;
}*/

/*Bai 7
#include <stdio.h>

int main()
{
    int n;
    float sum = 0;
    printf("Nhap gia tri n : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += (float)i / (i + 1);
    }

    printf("S(%d) = %.2f", n, sum);

    return 0;
}*/

/*Bai 8
#include <stdio.h>

int main()
{
    int n;
    float sum = 0;
    printf("Nhap n : ");
    scanf("%d", &n);

    for (int i = 1; i <= (2 * n + 1); i++)
    {
        if (i % 2 != 0)
        {
            sum += (float)i / (i + 1);
        }
    }

    printf("Tong = %.2f", sum);

    return 0;
}*/

/*Bai 9
#include <stdio.h>

int main()
{
    int n, tich = 1;
    printf("Nhap n : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        tich *= i;
    }

    printf("Tich = %d", tich);

    return 0;
}*/

/*Bai 10
#include <stdio.h>
#include <math.h>

int main()
{
    int x, n;
    printf("Nhap x = ");
    scanf("%d", &x);
    printf("Nhap n = ");
    scanf("%d", &n);

    int k = pow(x, n);
    printf("%d^%d = %d", x, n, k);

    return 0;
}*/

/*Bai 11
#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Nhap n = ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int tich = 1;
        for (int j = 1; j <= i; j++)
        {
            tich *= j;
        }
        sum += tich;
    }

    printf("Tong = %d", sum);

    return 0;
}*/

/*Bai 12
#include <stdio.h>
#include <math.h>

int main()
{
    int x, n, sum = 0;
    printf("Nhap x = ");
    scanf("%d", &x);
    printf("Nhap n = ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += pow(x, i);
    }

    printf("Tong = %d", sum);

    return 0;
}*/

/*Bai 13
#include <stdio.h>
#include <math.h>

int main()
{
    int x, n, sum = 0;
    printf("Nhap x = ");
    scanf("%d", &x);
    printf("Nhap n = ");
    scanf("%d", &n);

    for (int i = 1; i <= (n * 2); i++)
    {
        if (i % 2 == 0)
        {
            sum += pow(x, i);
        }
    }

    printf("Tong = %d", sum);

    return 0;
}*/

/*Bai 14
#include <stdio.h>
#include <math.h>

int main()
{
    int x, n, sum = 0;
    printf("Nhap x = ");
    scanf("%d", &x);
    printf("Nhap n = ");
    scanf("%d", &n);

    for (int i = 1; i <= (n * 2 + 1); i++)
    {
        if (i % 2 != 0)
        {
            sum += pow(x, i);
        }
    }

    printf("Tong = %d", sum);

    return 0;
}*/

/*Bai 15
#include <stdio.h>

int main()
{
    int n;
    float sumt = 0;
    printf("Nhap n = ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        for (int j = 1; j <= i; j++)
        {
            sum += j;
        }
        sumt += (float)1 / sum;
    }

    printf("Tong = %.2f", sumt);

    return 0;
}*/