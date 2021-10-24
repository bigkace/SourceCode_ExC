/*Bai 62
#include <stdio.h>

int UCLN(int a, int b)
{
    for (int i = a; i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            return i;
        }
    }
}

int main()
{
    int a, b;
    printf("Nhap a = ");
    scanf("%d", &a);
    printf("Nhap b = ");
    scanf("%d", &b);

    if (a < b)
    {
        printf("Uoc chung lon nhat cua %d va %d la : %d", a, b, UCLN(a, b));
        return 0;
    }
    else if (a > b)
    {
        printf("Uoc chung lon nhat cua %d va %d la : %d", a, b, UCLN(b, a));
        return 0;
    }
}*/

/*Bai 63
#include <stdio.h>

int BCNN(int a, int b)
{
    for (int i = b; i <= (a * b); i++)
    {
        if (i % b == 0 && i % a == 0)
        {
            return i;
        }
    }
}

int main()
{
    int a, b;
    printf("Nhap a , b = ");
    scanf("%d%d", &a, &b);

    if (a < b)
    {
        printf("Boi chung nho nhat cua %d va %d la : %d", a, b, BCNN(a, b));
        return 0;
    }
    else if (a > b)
    {
        printf("Boi chung nho nhat cua %d va %d la : %d", a, b, BCNN(b, a));
        return 0;
    }
}*/

/*Bai 64
#include <stdio.h>

int main()
{
    float a, b;
    printf("Nhap a , b = ");
    scanf("%f%f", &a, &b);

    printf("Giai phuong trinh %dx + %d = 0\n", a, b);
    if (a == 0)
    {
        if (b != 0)
        {
            printf("Phuong trinh vo nghiem");
            return 0;
        }
        else if (b == 0)
        {
            printf("Phuong trinh vo so nghiem");
            return 0;
        }
    }
    else if (a != 0)
    {
        printf("Phuong trinh co nghiem : x = %.2f", -b / (float)a);        
    }
}*/

/*Bai 65
#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c; 
    float delta, x1, x2;
    printf("Nhap a, b, c = ");
    scanf("%d%d%d", &a, &b, &c);

    printf("Giai phuong trinh %dx^2 + %dx + %d = 0\n", a, b, c);
    if (a == 0)
    {
        if (b == 0)
        {
            if (c != 0)
            {
                printf("Phuong trinh vo nghiem");
                return 0;
            }
            else if (c == 0)
            {
                printf("Phuong trinh vo so nghiem");
                return 0;
            }
        }
        else if (b != 0)
        {
            printf("Phuong trinh co nghiem : x = %.2f", -c / (float)b);
            return 0;
        }
    }
    else if (a != 0)
    {
        delta = pow(b,2) - 4 * a * c;
        if (delta < 0)
        {
            printf("Phuong trinh vo nghiem");
            return 0;
        }
        else if (delta == 0)
        {
            printf("Phuong trinh co nghiem kep x1 = x2 = %.2f", (float)-b / (2 * a));
            return 0;
        }
        else if (delta > 0)
        {
            x1 = (-b + sqrt(delta)) / (a * 2);
            x2 = (-b - sqrt(delta)) / (a * 2);
            printf("Phuong trinh co hai nghiem phan biet x1 = %.2f ; x2 = %.2f", x1, x2);
            return 0;
        }
    }
}*/

/*Bai 66
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void calF2a0(int b, int c)
{
    int delta;
    if (b == 0)
    {
        if (c != 0)
        {
            printf("Phuong trinh vo nghiem");
        }
        else if (c == 0)
        {
            printf("Phuong trinh vo so nghiem");
        }
    }
    else if (b != 0)
    {
        delta = - 4 * b * c;
        if (delta < 0)
        {
            printf("Phuong trinh vo nghiem");
        }
        else if (delta == 0)
        {
            if (b > 0)
            {
                printf("Phuong trinh vo nghiem");
            }
            else if (b < 0)
            {
                printf("Phuong trinh co hai nghiem phan biet x1 = %.2f ; x2 = %.2f", sqrt(-b), -sqrt(-b));
            }
        }
        else if (delta > 0)
        {
            if (b > 0)
            {
                float k = sqrt(delta) / (2 * b);
                printf("Phuong trinh co hai nghiem phan biet x1 = %.2f ; x2 = %.2f", k, -k);
            }
            if (b < 0)
            {
                float k = -sqrt(delta) / (2 * b);
                printf("Phuong trinh co hai nghiem phan biet x1 = %.2f ; x2 = %.2f", k, -k);
            }
        }
    }
}

void calF2(int a, int b, int c)
{
    float x1, x2;
    int delta;
    delta = pow(b,2) - 4 * a * c;
    if (delta < 0)
    {
        printf("Phuong trinh vo nghiem");
        exit(0);
    }
    else if (delta == 0)
    {
        float k = (float)-b / (a * 2);
        if (k < 0)
        {
            printf("Phuong trinh vo nghiem");
            exit(0);
        }
        else if (k == 0)
        {
            printf("Phuong trinh co nghiem duy nhat : x = %d", (int)k);
            exit(0);
        }
        else if (k > 0)
        {
            printf("Phuong trinh co hai nghiem phan biet : x1 = %.2f ; x2 = %.2f", sqrt(k), -sqrt(k));
            exit(0);
        }
    }
    else
    {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        if (x1 > 0 && x2 > 0)
        {
            printf("Phuong trinh co 4 nghiem phan biet : x1 = %.2f ; x2 = %.2f ; x3 = %.2f ; x4 = %.2f", sqrt(x1), -sqrt(x1), sqrt(x2), -sqrt(x2));
            exit(0);
        }
        else if (x1 > 0)
        {
            printf("Phuong trinh co 2 nghiem phan biet : x1 = %.2f ; x2 = %.2f", sqrt(x1), -sqrt(x1));
            exit(0);
        }
        else if (x2 > 0)
        {
            printf("Phuong trinh co 2 nghiem phan biet : x1 = %.2f ; x2 = %.2f", sqrt(x2), -sqrt(x2));
            exit(0);
        }
        else if (x1 == 0 || x2 == 0)
        {
            printf("Phuong trinh co nghiem duy nhat : x = 0");
            exit(0);
        }
        else
        {
            printf("Phuong trinh vo nghiem");
            exit(0);
        }
    }
}

int main()
{
    int a, b, c;
    printf("Nhap a, b, c = ");
    scanf("%d%d%d", &a, &b, &c);

    printf("Giai phuong trinh: %dx^4 + %dx^2 + %d = 0\n", a, b, c);
    if(a == 0)
    {
        calF2a0(b, c);
    }
    else
    {
        calF2(a, b, c);
    }

    return 0;
}*/

/*Bai 67
#include <stdio.h>
#include <math.h>

int main()
{
    int x, n, sum = 0;
    printf("Nhap x, n = ");
    scanf("%d%d", &x ,&n);

    for (int i = 1; i <= n; i++)
    {
        sum += pow(-1, i + 1)*pow(x, i);
    }

    printf("Tong = %d", sum);

    return 0;
}*/

/*Bai 68
#include <stdio.h>
#include <math.h>

int main()
{
    int x, n, sum = 0;
    printf("Nhap x, n = ");
    scanf("%d%d", &x, &n);

    for (int i = 1; i <= n; i++)
    {
        sum += pow(-1,i)*pow(x, (2*i));
    }

    printf("Tong = %d", sum);

    return 0;
}*/

/*Bai 69
#include <stdio.h>
#include <math.h>

int main()
{
    int x, n, sum = 0;
    printf("Nhap x, n = ");
    scanf("%d%d", &x, &n);

    for (int i = 1; i <= n; i++)
    {
        sum += pow(-1,i)*pow(x, (2*i));
    }

    printf("Tong = %d", sum);

    return 0;
}*/

/*Bai 70
#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    float sumT = 0;
    printf("Nhap n = ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        for (int j = 1; j <= i; j++)
        {
            sum += j;
        }
        sumT += pow(-1, i+1) / (float)sum;
    }

    printf("Tong = %.2f", sumT);

    return 0;
}*/

/*Bai 71
#include <stdio.h>
#include <math.h>

int main()
{
    int x, n;
    float sumT = 0;
    printf("Nhap x, n = ");
    scanf("%d%d", &x, &n);

    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        for (int j = 1; j <= i; j++)
        {
            sum += j;
        }
        sumT += (pow(-1,i) * pow(x,i)) / (float)sum;
    }

    printf("Tong = %.2f", sumT);

    return 0;
}*/

/*Bai 72
#include <stdio.h>
#include <math.h>

int main()
{
    int x, n;
    float sumT = 0;
    printf("Nhap x, n = ");
    scanf("%d%d", &x, &n);

    for (int i = 1; i <= n; i++)
    {
        int gt = 1;
        for (int j = 1; j <= i; j++)
        {
            gt *= j;
        }
        sumT += (pow(-1,i) * pow(x,i)) / (float)gt;
    }

    printf("Tong = %.2f", sumT);

    return 0;
}*/

/*Bai 73
#include <stdio.h>
#include <math.h>

int main()
{
    int x, n;
    float sumT = 0;
    printf("Nhap x, n = ");
    scanf("%d%d", &x, &n);

    for (int i = 0; i <= n; i++)
    {
        int gt = 1;
        for (int j = 1; j <= (2 * i); j++)
        {
            gt *= j;
        }
        sumT += pow(-1, i + 1) * pow(x, 2 * i) / (float)gt;
    }

    printf("Tong = %.2f", sumT);

    return 0;
}*/

/*Bai 74
#include <stdio.h>
#include <math.h>

int main()
{
    int x, n;
    float sumT = 0;
    printf("Nhap x, n = ");
    scanf("%d%d", &x, &n);

    for (int i = 0; i <= n; i++)
    {
        int gt = 1;
        for (int j = 1; j <= (2 * i + 1); j++)
        {
            gt *= j;
        }
        sumT += pow(-1, i+1) * pow(x, 2 * i + 1) / (float)gt;
    }

    printf("Tong = %.2f", sumT+1);

    return 0;
}*/

/*Bai 75
#include <stdio.h>

int main()
{
    int n, count;
    printf("Nhap n = ");
    scanf("%d", &n);

    while (n > 1)
    {
        if(n % 2 != 0)
        {
            printf("So nguyen 4 byte khong co dang 2^k");
            return 0;
        }
        count++;
        n /= 2;
    }
    printf("So nguyen 4 byte co dang 2^k : 2^%d", count);

    return 0;
}*/

/*Bai 76*/
#include <stdio.h>

int main()
{
    int n, count;
    printf("Nhap n = ");
    scanf("%d", &n);

    while (n > 1)
    {
        if(n % 3 != 0)
        {
            printf("So nguyen 4 byte khong co dang 3^k");
            return 0;
        }
        count++;
        n /= 3;
    }
    printf("So nguyen 4 byte co dang 3^k : 3^%d", count);

    return 0;
}