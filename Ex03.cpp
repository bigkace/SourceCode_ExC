#include <bits/stdc++.h>

using namespace std;

#define MAX_ROW 100
#define MAX_COL 100

void Input(float arr[][MAX_COL], int row, int col)
{
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cout << "arr[" << i << "][" << j << "]"
           << " = ";
      cin >> arr[i][j];
    }
    cout << endl;
  }
}

void Output(float arr[][MAX_COL], int row, int col)
{
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cout << setprecision(2) << fixed << arr[i][j] << "\t";
    }
    cout << endl;
  }
}

float searchMax(float arr[][MAX_COL], int row, int col)
{
  float max = arr[0][0];
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      if (arr[i][j] > max)
      {
        max = arr[i][j];
      }
    }
  }
  return max;
}

int main()
{
  float arr[MAX_ROW][MAX_COL];

  int row, col;
  cout << "Enter row and column :  ";
  cin >> row >> col;

  cout << "\n**********Input*************" << endl;
  Input(arr, row, col);

  cout << "**********Output*************" << endl;
  Output(arr, row, col);

  cout << "\n**********SearchMax*************" << endl;
  cout << "The largest element in the matrix = " << setprecision(2) << fixed << searchMax(arr, row, col);

  return 0;
}