#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

class ThiSinh
{
protected:
  string full_name;
  float math, physical, chemical, total_score;

public:
  ThiSinh()
  {
    this->full_name = "";
    this->math = this->physical = this->chemical = this->total_score = 0;
  }
  ~ThiSinh()
  {
    this->full_name = "";
    this->math = this->physical = this->chemical = this->total_score = 0;
  }

  friend istream &operator>>(istream &is, ThiSinh &obj)
  {
    cout << "Enter the candidate's full name : ";
    fflush(stdin);
    getline(is, obj.full_name);
    cout << "Enter math score , physical score and chemical score : ";
    is >> obj.math >> obj.physical >> obj.chemical;
    obj.total_score = obj.math + obj.physical + obj.chemical;
    return is;
  }

  friend ostream &operator<<(ostream &os, ThiSinh obj)
  {
    cout << "The candidate's full name : " << obj.full_name << endl;
    cout << "Math score , Phycical score and Chemical score : " << obj.math << " " << obj.physical << " " << obj.chemical << endl;
    return os;
  }

  bool operator>(const ThiSinh &obj)
  {
    if (this->total_score > obj.total_score)
    {
      return true;
    }
    else
    {
      return false;
    }
  }
};

void swap(ThiSinh &a, ThiSinh &b)
{
  ThiSinh temp = a;
  a = b;
  b = temp;
}

void SelectionSort(ThiSinh arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (arr[j] > arr[i])
      {
        swap(arr[j], arr[i]);
      }
    }
  }
}

int main()
{
  cout << "\nEnter the number of candidates : ";
  int n;
  cin >> n;

  ThiSinh *arr = new ThiSinh[n];

  getch();
  system("cls");

  cout << "\n*************Input***************" << endl;
  for (int i = 0; i < n; i++)
  {
    cout << "\n**Enter candidate information " << i + 1 << endl;
    cin >> arr[i];
  }

  getch();
  system("cls");

  cout << "\n*************Output***************" << endl;
  for (int i = 0; i < n; i++)
  {
    cout << "\n**Candidate information " << i + 1 << endl;
    cout << arr[i];
  }

  getch();
  system("cls");

  cout << "\n*************OutputSort***************" << endl;
  SelectionSort(arr, n);
  for (int i = 0; i < n; i++)
  {
    cout << "\n**Candidate information " << i + 1 << endl;
    cout << arr[i];
  }

  return 0;
}