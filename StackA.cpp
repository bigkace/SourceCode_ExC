#include <bits/stdc++.h>

using namespace std;

typedef struct
{
  int top;
  unsigned capacity;
  int *array;
} Stack;

Stack *Create_Stack(unsigned cap)
{
  Stack *stack = new Stack();
  stack->capacity = cap;
  stack->top = -1;
  stack->array = new int(stack->capacity);
  return stack;
}

int IsFull(Stack *stack)
{
  if (stack->top == stack->capacity - 1)
  {
    return true;
  }
  else
  {
    return false;
  }
}

int IsEmpty(Stack *stack)
{
  if (stack->top == -1)
  {
    return true;
  }
  else
  {
    return false;
  }
}

void Push(Stack *stack, int value)
{
  if (IsFull(stack) == true)
  {
    cout << "\nStack is full. Overflow condition !";
  }
  else
  {
    stack->top++;
    stack->array[stack->top] = value;
  }
}

void Pop(Stack *stack)
{
  if (IsEmpty(stack) == true)
  {
    cout << "\nStack is empty. Underflow condition !";
  }
  else
  {
    stack->top--;
  }
}

int Size(Stack *stack)
{
  return stack->top + 1;
}

int main()
{
  cout << "\nEnter capacity : ";
  unsigned cap;
  cin >> cap;

  Stack *stack = Create_Stack(cap);

  Push(stack, 14);
  cout << "\nCurrent size of stack is : " << Size(stack) << endl;
  cout << "The current top element of stack is : " << stack->array[stack->top] << endl;

  Push(stack, 25);
  cout << "\nCurrent size of stack is : " << Size(stack) << endl;
  cout << "The current top element of stack is : " << stack->array[stack->top] << endl;

  Push(stack, 38);
  cout << "\nCurrent size of stack is : " << Size(stack) << endl;
  cout << "The current top element of stack is : " << stack->array[stack->top] << endl;

  Push(stack, 48);
  cout << "\nCurrent size of stack is : " << Size(stack) << endl;
  cout << "The current top element of stack is : " << stack->array[stack->top] << endl;

  Pop(stack);
  cout << "\nCurrent size of stack is : " << Size(stack) << endl;
  cout << "The current top element of stack is : " << stack->array[stack->top] << endl;

  return 0;
}