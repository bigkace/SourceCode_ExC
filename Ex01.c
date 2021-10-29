#include <stdio.h>
#include <math.h>

float x[100], y[100];
float do_dai(int i, int j)
{
  return sqrt(pow(x[i] - x[j], 2) + pow(y[i] - y[j], 2));
}

void nhapd(int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("\nNhap toan do x , y cua diem thu %d :", i + 1);
    scanf("%f %f", &x[i], &y[i]);
  }
}

void main()
{
  int n, i, j, i_max, j_max;
  float d, d_max;

  printf("Nhap n : ");
  scanf("%d", &n);

  nhapd(n);

  d_max = do_dai(0, 1);
  i_max = 0;
  j_max = 1;
  for (i = 0; i < n - 1; i++)
  {
    for (j = i + 1; j < n; j++)
    {
      d = do_dai(i, j);
      if (d > d_max)
      {
        d_max = d;
        i_max = i + 1;
        j_max = j + 1;
      }
    }
  }

  printf("\nDoan thang lon nhat co do dai bang : %0.2f", d_max);
  printf("\nDi qua 2 diem co index = %d va index = %d", i_max, j_max);
}