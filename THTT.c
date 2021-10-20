#include <stdio.h>
#include <string.h>
#include <math.h>

int UCLN(int a, int b)
{
    a = abs(a);
    b = abs(b);
    
    while (a * b != 0)
    {
        if (a > b)
        {
            a %= b;
        }
        else if (a < b)
        {
            b %= a;
        }
    }

    return a + b;
}

typedef struct PhanSo
{
    int tuso, mauso;
} PS;

PS RutGon(PS a)
{
    PS c;
    c.tuso = a.tuso / UCLN(a.tuso, a.mauso);
    c.mauso = a.mauso / UCLN(a.tuso, a.mauso);
    return c;
}

PS Tong(PS a, PS b)
{
    PS c;
    c.tuso = a.tuso * b.mauso + b.tuso * a.mauso;
    c.mauso = a.mauso * b.mauso;
    c = RutGon(c);
    return c;
}

PS Hieu(PS a, PS b)
{
    PS c;
    c.tuso = a.tuso * b.mauso - b.tuso * a.mauso;
    c.mauso = a.mauso * b.mauso;
    c = RutGon(c);
    return c;
}

PS Tich(PS a, PS b)
{
    PS c;
    c.tuso = a.tuso * b.tuso;
    c.mauso = a.mauso * b.mauso;
    c = RutGon(c);
    return c;
}

PS Thuong(PS a, PS b)
{
    PS c;
    c.tuso = a.tuso * b.mauso;
    c.mauso = b.tuso * a.mauso;
    c = RutGon(c);
    return c;
}

void PrintPS(PS a)
{
    printf("%d/%d", a.tuso, a.mauso);
}

int main()
{
    PS a, b, c;
    
    printf("Nhap phan so a : ");
    scanf("%d %d", &a.tuso, &a.mauso);
    printf("Nhap phan so b : ");
    scanf("%d %d", &b.tuso, &b.mauso);

    printf("\n__________________________\n");

    printf("\nToi gian a : ");
    a = RutGon(a);
    PrintPS(a);

    printf("\nToi gian b : ");
    b = RutGon(b);
    PrintPS(b);

    printf("\n__________________________\n");
    printf("\nTong cua hai phan so =  ");
    c = Tong(a, b);
    PrintPS(c);

    printf("\n__________________________\n");
    printf("\nHieu cua hai phan so = ");
    c = Hieu(a, b);
    PrintPS(c);

    printf("\n__________________________\n");
    printf("\nTich cua hai phan so = ");
    c = Tich(a, b);
    PrintPS(c);

    printf("\n__________________________\n");
    printf("\nThuong cua hai phan so = ");
    c = Thuong(a, b);
    PrintPS(c);

    printf("\n");

    return 0;
}