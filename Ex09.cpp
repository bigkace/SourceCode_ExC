#include <bits/stdc++.h>

using namespace std;

struct Candidate
{
  string full_name;
  float math, physical, chemical, total_score;
};

Candidate *obj;

void memory_allocation(int n)
{
  obj = new Candidate[n];
  if (obj == NULL)
  {
    cout << "\nError memory allocation !";
    exit(0);
  }
}

void Input(int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << "Candidate " << i + 1 << endl;
    cout << "Full_name : ";
    fflush(stdin);
    getline(cin, obj[i].full_name);
    cout << "Score (Math - Physical - Chemical) : ";
    cin >> obj[i].math >> obj[i].physical >> obj[i].chemical;
    obj[i].total_score = obj[i].math + obj[i].physical + obj[i].chemical;
  }
}

Candidate &search(int i, int n)
{
  if (i < 0 || i > n)
  {
    cout << "\nInvalid index!";
    exit(1);
  }
  return obj[i];
}

int main()
{
  int n, i;
  cout << "Enter the number of candidates : ";
  cin >> n;

  memory_allocation(n);

  Input(n);

  cout << "\nWhich index element do you want to see ?";
  cin >> i;

  Candidate &h = search(i, n);
  cout << "Full name : " << h.full_name << endl;
  cout << "Total score : " << h.total_score << endl;

  return 0;
}