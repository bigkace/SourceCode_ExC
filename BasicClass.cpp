#include <bits/stdc++.h>

using namespace std;

class sinhvien
{
private:
  string ten, masinhvien;
  int tuoi;

public:
  void in()
  {
    cout << "Nhap ten sinh vien : ";
    fflush(stdin);
    getline(cin, this->ten);
    cout << "Nhap ma sinh vien : ";
    fflush(stdin);
    getline(cin, this->masinhvien);
    cout << "Nhap tuoi sinh vien : ";
    cin >> tuoi;
  }
  void out()
  {
    cout << "MSV : " << masinhvien << endl;
    cout << "Ho Ten : " << ten << endl;
    cout << "Tuoi : " << tuoi << endl;
  }
};

int main()
{
  sinhvien sv1;
  sv1.in();
  sv1.out();
}