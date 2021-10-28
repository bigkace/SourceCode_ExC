#include <bits/stdc++.h>

using namespace std;

class sinhvien
{
private:
  string msv, ten;
  int tuoi;

public:
  sinhvien()
  {
    this->msv = "";
    this->ten = "";
    this->tuoi = 0;
  }
  ~sinhvien()
  {
    this->msv = "";
    this->ten = "";
    this->tuoi = 0;
  }

  void in()
  {
    cout << "Nhap msv : ";
    getline(cin, this->msv);
    cout << "Nhap ten : ";
    getline(cin, this->ten);
    cout << "Nhap tuoi : ";
    cin >> tuoi;
  }

  void out()
  {
    cout << "Ma Sinh Vien : " << msv << endl;
    cout << "Ho Ten : " << ten << endl;
    cout << "Tuoi : " << tuoi << endl;
  }
};

int main()
{
  sinhvien obj;
  cout << "\nBefore in\n";
  obj.out();

  obj.in();
  cout << "\nAfter in\n";
  obj.out();
}