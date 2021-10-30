#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

struct Candidate
{
  string full_name, identifi_num;
  float math, physical, chemical, total_score;
};

void input(Candidate arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << "\n**Enter candidate's information of candidate " << i + 1 << " **" << endl;
    cout << "Enter candidate's full name : ";
    fflush(stdin);
    getline(cin, arr[i].full_name);
    cout << "Enter candidate's identification number : ";
    fflush(stdin);
    getline(cin, arr[i].identifi_num);
    cout << "Enter score (math, physical and chemical) : ";
    cin >> arr[i].math >> arr[i].physical >> arr[i].chemical;
    arr[i].total_score = arr[i].math + arr[i].physical + arr[i].chemical;
  }
}

void output(Candidate arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << "\n**Candidate's information of candidate " << i + 1 << " **" << endl;
    cout << "Candidate's full name : " << arr[i].full_name << endl;
    cout << "Candidate's identification number : " << arr[i].identifi_num << endl;
    cout << "Score (Math - Physical - Chemical) : " << arr[i].math << " " << arr[i].physical << " " << arr[i].chemical << endl;
    cout << "Total Score : " << arr[i].total_score << endl;
  }
}

int main()
{
  cout << "\nEnter the number of candidates : ";
  int n;
  cin >> n;

  Candidate *arr = new Candidate[n];

  getch();
  system("cls");

  cout << "\n***********INPUT***************" << endl;
  input(arr, n);

  getch();
  system("cls");

  cout << "\n***********OUTPUT***************" << endl;
  output(arr, n);

  return 0;
}