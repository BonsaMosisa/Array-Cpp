#include <iostream>
using namespace std;
void printpattern(int);
void printstar(int);
int main()
{
  int n;
  cout << "Enter a number :";
  cin >> n;
  printpattern(n);
  return 0;
}
void printpattern(int n)
{
  if (n > 1)
  {
    printstar(n);
    printpattern(n - 1);
    printstar(n);
  }
}
void printstar(int n)
{
  cout << endl;
  for (int i = 0; i < n; i++)
  {
    cout << " * ";
  }
}