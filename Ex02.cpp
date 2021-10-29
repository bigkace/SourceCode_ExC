#include <bits/stdc++.h>
#include <math.h>

using namespace std;

class daydiem
{
protected:
  int *x, *y;

public:
  int n;
  float do_dai(int i, int j)
  {
    return sqrt(pow(x[i] - x[j], 2) + pow(y[i] - y[j], 2));
  }

  void nhap_d()
  {
    cout << "\nNhap n : ";
    cin >> n;
    x = new int[100];
    y = new int[100];
    for (int i = 0; i < n; i++)
    {
      cout << "\nNhap toa do x va y cua diem thu " << i + 1 << " : ";
      cin >> x[i] >> y[i];
    }
  }
};

int main()
{
  daydiem X;
  X.nhap_d();
  int n, i, j, i_max, j_max;
  float d, d_max;
  n = X.n;

  d_max = X.do_dai(0, 1);
  i_max = 0;
  j_max = 1;

  for (i = 0; i < n - 1; i++)
  {
    for (j = i + 1; j < n; j++)
    {
      d = X.do_dai(i, j);
      if (d > d_max)
      {
        d_max = d;
        i_max = i + 1;
        j_max = j + 1;
      }
    }
  }

  cout << "\nDoan thang lon nhat co do dai = " << d_max;
  cout << "\nDi qua 2 diem co index = " << i_max << " va index = " << j_max;

  return 0;
}