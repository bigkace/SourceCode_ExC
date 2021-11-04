#include <bits/stdc++.h>

using namespace std;

int top = -1;

int Check(char str[], int length, char stack[])
{
  for (int i = 0; i < length; i++)
  {
    if (str[i] == '(')
    {
      top++;
      stack[top] = '(';
    }
    if (str[i] == ')')
    {
      if (top == -1)
      {
        return false;
      }
      else
      {
        top--;
      }
    }
  }

  if (top == -1)
  {
    return true;
  }
  else
  {
    return false;
  }
}

int main()
{
  char str[100];
  cin >> str;

  char stack[100];

  if (Check(str, strlen(str), stack) == true)
  {
    cout << "\nString is balanced !" << endl;
  }
  else
  {
    cout << "\nString is unbalanced !" << endl;
  }

  return 0;
}