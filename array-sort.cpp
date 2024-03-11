#include <iostream>
using namespace std;
int main()
{

  int arr[2][3] = {12, 32, 43, 56, 54, 53};
  int lir, lic, sir, sic;

  for (int i = 0; i < 2; i++)
  {
    lir = arr[i][0];
    for (int j = 0; j < 3; j++)
    {
      if (lir < arr[i][j])
        lir = arr[i][j];
    }
    cout << "The largest element in the raw " << i + 1 << " :" << lir << endl;
  }

  return 0;
}