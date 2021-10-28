#include <bits/stdc++.h>

using namespace std;

class sinhvien
{
private:
  string msv, ten;
  int tuoi;
  float dtoan, dvan, danh;

public:
  sinhvien()
  {
    this->msv = "";
    this->ten = "";
    this->tuoi = 0;
    this->dtoan = this->dvan = this->danh = 0;
  }
  ~sinhvien()
  {
    this->msv = "";
    this->ten = "";
    this->tuoi = 0;
    this->dtoan = this->dvan = this->danh = 0;
  }

  void set()
  {
    cout << "Nhap msv : ";
    getline(cin, this->msv);
    cout << "Nhap ten :  ";
    getline(cin, this->ten);
    cout << "Nhap tuoi : ";
    cin >> tuoi;
    cout << "Nhap dtoan, dvan, danh : ";
    cin >> dtoan >> dvan >> danh;
  }

  void get()
  {
    cout << "Ma Sinh Vien : " << msv << endl;
    cout << "Ho Ten : " << ten << endl;
    cout << "Tuoi : " << tuoi << endl;
    cout << "Diem Trung Binh : " << DTB() << endl;
  }

  float DTB()
  {
    return (this->dtoan + this->dvan + this->danh) / 3;
  }
};

int main()
{
  sinhvien obj;

  obj.set();
  obj.get();
}