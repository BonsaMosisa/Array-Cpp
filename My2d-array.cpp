#include <iostream>
using namespace std;
int main()
{
  int i, j;

  int n, k;
  cout << "How many rows you matrix has";
  cin >> n;
  cout << "How many columns you matrix has";
  cin >> k;
  int matA[n][k];

  for (i = 0; i < n; i++)
  {
    for (j = 0; j < k; j++)
    {
      cout << "Enter element [" << i << "][" << j << "]" << endl;
      cin >> matA[i][j];
    }
  }
  int smR;
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < k; j++)
    {
      if (matA[i][0] < matA[i][j])
        smR = matA[i][j];
    }
    cout << "The smallest element in the row" << i + 1 is << smR << endl;
  }

  return 0;
}