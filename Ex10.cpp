#include <bits/stdc++.h>

using namespace std;

void InputMatrix(int **A, int row, int col)
{
  A = new int *[row];
  for (int i = 0; i < row; i++)
  {
    A[i] = new int[col];
    for (int j = 0; j < col; j++)
    {
      cin >> A[i][j];
    }
  }

  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cout << A[i][j] << "\t";
    }
    cout << endl;
  }
}

void DeleteArray(int **A, int row)
{
  for (int i = 0; i < row; i++)
  {
    delete[] A[i];
  }
  delete[] A;
}

int main()
{
  int **A, row, col;
  cout << "\nEnter row and column : ";
  cin >> row >> col;

  InputMatrix(A, row, col);

  DeleteArray(A, row);

  return 0;
}