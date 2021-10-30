#include <bits/stdc++.h>

using namespace std;

#define MAX_ROW 100
#define MAX_COL 100

void input(float arr[][MAX_COL], int row, int col)
{
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cout << "arr[" << i << "][" << j << "] = ";
      cin >> arr[i][j];
    }
    cout << endl;
  }
}

void output(float arr[][MAX_COL], int row, int col)
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

void maxmin(float arr[][MAX_COL], int row, int col)
{
  for (int i = 0; i < row; i++)
  {
    float value_max = arr[i][0], value_min = arr[i][0];
    for (int j = 0; j < row; j++)
    {
      if (arr[i][j] > value_max)
      {
        value_max = arr[i][j];
      }
      if (arr[i][j] < value_min)
      {
        value_min = arr[i][j];
      }
    }
    cout << "\n Row " << i + 1 << endl;
    cout << "Maximum value "
         << " = " << value_max << endl;
    cout << "Minimum value "
         << " = " << value_min << endl;
  }
}

int main()
{
  float arr[MAX_ROW][MAX_COL];
  int row, col;
  cout << "\nEnter row and column : ";
  do
  {
    cin >> row >> col;
    if (row < 0 || row > MAX_ROW || col < 0 || col > MAX_COL)
    {
      cout << "\nRe-enter row and column : ";
    }
  } while (row < 0 || row > MAX_ROW || col < 0 || col > MAX_COL);

  cout << "\n**********INPUT*************" << endl;
  input(arr, row, col);

  cout << "\n**********OUTPUT*************" << endl;
  output(arr, row, col);

  cout << "\n**********OUTPUT MAX&MIN*************" << endl;
  maxmin(arr, row, col);

  return 0;
}