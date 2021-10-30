#include <bits/stdc++.h>

using namespace std;

void Input(float arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << "arr[" << i << "] = ";
    cin >> arr[i];
  }
}

void Swap(float &a, float &b)
{
  float temp = a;
  a = b;
  b = temp;
}

void SortAscending(float arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (arr[j] < arr[i])
      {
        Swap(arr[j], arr[i]);
      }
    }
  }
}

void Output(float arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}

int main()
{
  cout << "\n Enter the number of elements : ";
  int n;
  cin >> n;

  float *arr = new float[n];

  cout << "\n*********************INPUT********************" << endl;
  Input(arr, n);

  cout << "\n*********************OUTPUT********************" << endl;
  SortAscending(arr, n);
  cout << "Sort Ascending : ";
  Output(arr, n);

  delete[] arr;

  return 0;
}