#include <bits/stdc++.h>

using namespace std;

class Color
{
protected:
  string TenMau, MaMau;

public:
  Color()
  {
    this->TenMau = this->MaMau = "";
  }
  Color(string TenMau, string MaMau)
  {
    this->TenMau = TenMau;
    this->MaMau = MaMau;
  }
  ~Color()
  {
    this->TenMau = this->MaMau = "";
  }

  friend istream &operator>>(istream &is, Color &obj)
  {
    cout << "Nhap Ten Mau : ";
    fflush(stdin);
    getline(is, obj.TenMau);
    cout << "Nhap Ma Mau : ";
    fflush(stdin);
    getline(is, obj.MaMau);
    return is;
  };

  friend ostream &operator<<(ostream &os, Color obj)
  {
    cout << "Ten Mau : " << obj.TenMau << endl;
    cout << "Ma Mau : " << obj.MaMau << endl;
    return os;
  }
  string getTenMau()
  {
    return this->TenMau;
  }
};

class Point
{
protected:
  int x, y;

public:
  Point()
  {
    this->x = this->y = 0;
  }
  Point(int x, int y)
  {
    this->x = x;
    this->y = y;
  }
  ~Point()
  {
    this->x = this->y = 0;
  }

  friend istream &operator>>(istream &is, Point &obj)
  {
    cout << "Nhap x, y : ";
    is >> obj.x >> obj.y;
    return is;
  };

  friend ostream &operator<<(ostream &os, Point obj)
  {
    cout << "x = " << obj.x << endl;
    cout << "y = " << obj.y << endl;
    return os;
  }

  bool CheoChinh()
  {
    if (x == y)
    {
      return true;
    }
    else
    {
      return false;
    }
  }
};

class Pixel : public Color, public Point
{
public:
  Pixel()
  {
    x = y = 0;
    TenMau = MaMau = "";
  }
  Pixel(int x, int y, string TenMau, string MaMau)
  {
    this->x = x;
    this->y = y;
    this->TenMau = TenMau;
    this->MaMau = MaMau;
  }
  ~Pixel()
  {
    x = y = 0;
    TenMau = MaMau = "";
  }

  friend istream &operator>>(istream &is, Pixel &obj)
  {
    cout << "Nhap x : ";
    is >> obj.x;
    cout << "Nhap y : ";
    is >> obj.y;
    cout << "Nhap Ten Mau : ";
    is >> obj.TenMau;
    cout << "Nhap Ma Mau : ";
    is >> obj.MaMau;
    return is;
  }

  friend ostream &operator<<(ostream &os, Pixel obj)
  {
    cout << "x =  " << obj.x << endl;
    cout << "y = " << obj.y << endl;
    cout << "Ten Mau : " << obj.TenMau << endl;
    cout << "Ma Mau : " << obj.MaMau << endl;
    return os;
  }

  bool Check()
  {
    if (x == y && MaMau == "#0000FF")
    {
      return true;
    }
    else
    {
      return false;
    }
  }
};

int main()
{
  cout << "Nhap So Luong : ";
  int n;
  cin >> n;

  Pixel *arr = new Pixel[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  cout << "Output" << endl;
  for (int i = 0; i < n; i++)
  {
    if (arr[i].Check() == true)
    {
      cout << arr[i];
    }
  }

  return 0;
}