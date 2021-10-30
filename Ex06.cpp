#include <bits/stdc++.h>

using namespace std;

struct Candidate
{
  string full_name, identification_num;
  float total_score;
};

void input(Candidate arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << "\n**Enter candidate's information " << i + 1 << "**" << endl;
    cout << "Enter candidate's full name : ";
    fflush(stdin);
    getline(cin, arr[i].full_name);
    cout << "Enter candidate's identification number : ";
    fflush(stdin);
    getline(cin, arr[i].identification_num);
    cout << "Enter total score : ";
    cin >> arr[i].total_score;
  }
}

void swap(Candidate &a, Candidate &b)
{
  Candidate temp = a;
  a = b;
  b = temp;
}

void SelectionSort(Candidate arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (arr[j].total_score > arr[i].total_score)
      {
        swap(arr[i], arr[j]);
      }
    }
  }
}

void output(Candidate arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << "\n**Candidate's infomation " << i + 1 << "**" << endl;
    cout << "Candidate's full name : " << arr[i].full_name << endl;
    cout << "Candidate's identification number : " << arr[i].identification_num << endl;
    cout << "Candidate's total score : " << arr[i].total_score << endl;
  }
}

int main()
{
  cout << "\nEnter the number of candidates : ";
  int n;
  cin >> n;

  Candidate *arr = new Candidate[n];
  if (arr == NULL)
  {
    cout << "\nError cannot allocate memory !";
    exit(0);
  }

  cout << "\n*************INPUT*****************" << endl;
  input(arr, n);

  cout << "\n*************OUTPUT*****************" << endl;
  SelectionSort(arr, n);
  output(arr, n);

  delete[] arr;

  return 0;
}