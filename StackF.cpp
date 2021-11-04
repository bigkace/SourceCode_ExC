#include <bits/stdc++.h>

using namespace std;

int top = -1;

int IsFull(int capacity)
{
  if (top >= capacity - 1)
  {
    return true;
  }
  else
  {
    return false;
  }
}

int IsEmpty()
{
  if (top == -1)
  {
    return true;
  }
  else
  {
    return false;
  }
}

void Push(int stack[], int value, int capacity)
{
  if (IsFull(capacity) == true)
  {
    cout << "\nStack is full. Overflow condition !" << endl;
  }
  else
  {
    top++;
    stack[top] = value;
  }
}

int Size()
{
  return top + 1;
}

int Top(int stack[])
{
  return stack[top];
}

void Pop()
{
  if (IsEmpty() == true)
  {
    cout << "\nStack is empty. Underflow condition !" << endl;
  }
  else
  {
    top--;
  }
}

int main()
{
  int capacity = 3;
  int stack[capacity];

  cout << "\n(Before push) Current size of stack is : " << Size() << endl;

  Push(stack, 5, 3);
  cout << "\n(After push 5) Current size of stack is : " << Size() << endl;

  Push(stack, 10, 3);
  cout << "\n(After push 10) Current size of stack is : " << Size() << endl;

  Push(stack, 24, 3);
  cout << "\n(After push 24) Current size of stack is : " << Size() << endl;

  if (IsFull(capacity) == true)
  {
    cout << "\nNow stack is full. Overlow condition !" << endl;
  }

  Push(stack, 12, 3);
  cout << "\n(After push 12) Current size of stack is : " << Size() << endl;

  cout << "\nThe current top element of stack is : " << Top(stack) << endl;

  for (int i = 0; i < capacity; i++)
  {
    Pop();
  }
  cout << "\n(After pop) Current size of stack is : " << Size() << endl;

  Pop();

  return 0;
}