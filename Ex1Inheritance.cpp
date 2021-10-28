#include <bits/stdc++.h>

using namespace std;

class people
{
private:
  string name, address;
  int age;

public:
  people()
  {
    this->name = this->address = "";
    this->age = 0;
  }
  ~people()
  {
    this->name = this->address = "";
    this->age = 0;
  }

  void set()
  {
    cout << "Enter name : ";
    getline(cin, this->name);
    cout << "Enter address : ";
    getline(cin, this->address);
    cout << "Enter age : ";
    cin >> this->age;
  }

  void get()
  {
    cout << "Full name : " << this->name << endl;
    cout << "Address : " << this->address << endl;
    cout << "Age : " << this->age << endl;
  }
};

class student : public people
{
private:
  string id;
  float math, physical, chemistry;

public:
  student()
  {
    this->id = "";
    this->math = this->physical = this->chemistry = 0;
  }
  ~student()
  {
    this->id = "";
    this->math = this->physical = this->chemistry = 0;
  }

  void set()
  {
    people ::set();
    cout << "Enter id : ";
    fflush(stdin);
    getline(cin, this->id);
    cout << "Enter Math Score , Physical Score and Chemistry Score : ";
    cin >> this->math >> this->physical >> this->chemistry;
  }

  void get()
  {
    people ::get();
    cout << "ID : " << this->id << endl;
    cout << "Math, Physical and Chemistry : " << this->math << " " << this->physical << " " << this->chemistry << endl;
    cout << "GPA : " << GPA() << endl;
  }

  float GPA()
  {
    return (this->math + this->physical + this->chemistry) / 3;
  }
};

int main()
{
  student obj;

  obj.set();
  obj.get();
}