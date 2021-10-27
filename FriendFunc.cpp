#include <bits/stdc++.h>

using namespace std;

class GiangVien;
class SinhVien
{
private:
  string MaSinhVien;

public:
  SinhVien()
  {
    this->MaSinhVien = "";
  }
  ~SinhVien()
  {
    this->MaSinhVien = "";
  }

  void set()
  {
    cout << "Nhap ma sinh vien : ";
    fflush(stdin);
    getline(cin, this->MaSinhVien);
  }

  friend void get(SinhVien a, GiangVien b);
};

class GiangVien
{
private:
  string MaGiangVien;

public:
  GiangVien()
  {
    this->MaGiangVien;
  }
  ~GiangVien()
  {
    this->MaGiangVien;
  }

  void set()
  {
    cout << "Nhap ma giang vien : ";
    fflush(stdin);
    getline(cin, this->MaGiangVien);
  }

  friend void get(SinhVien a, GiangVien b);
};

void get(SinhVien a, GiangVien b)
{
  cout << "Ma sinh vien : " << a.MaSinhVien << endl;
  cout << "Ma giang vien : " << b.MaGiangVien << endl;
}

int main()
{
  SinhVien a;
  GiangVien b;
  a.set();
  b.set();
  get(a, b);
}