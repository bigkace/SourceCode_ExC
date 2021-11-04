#include <bits/stdc++.h>
#include <stack>

using namespace std;

int main()
{
  stack<int> mystack;

  cout << "\nPushing in elements.....";
  for (int i = 0; i < 5; i++)
  {
    mystack.push(i);
    cout << ' ' << mystack.top();
  }

  cout << "\nPopping out elements........";
  while (!mystack.empty())
  {
    cout << ' ' << mystack.top();
    mystack.pop();
  }

  cout << endl;

  return 0;
}