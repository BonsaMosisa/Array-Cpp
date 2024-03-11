#include <iostream>

const int ROWS = 3;
const int COLS = 3;

void findLargestElement(int arr[ROWS][COLS])
{
  // Find largest element in each row
  for (int i = 0; i < ROWS; ++i)
  {
    int maxInRow = arr[i][0];
    for (int j = 1; j < COLS; ++j)
    {
      if (arr[i][j] > maxInRow)
      {
        maxInRow = arr[i][j];
      }
    }
    std::cout << "Largest element in row " << i + 1 << ": " << maxInRow << std::endl;
  }

  // Find largest element in each column
  for (int j = 0; j < COLS; ++j)
  {
    int maxInCol = arr[0][j];
    for (int i = 1; i < ROWS; ++i)
    {
      if (arr[i][j] > maxInCol)
      {
        maxInCol = arr[i][j];
      }
    }
    std::cout << "Largest element in column " << j + 1 << ": " << maxInCol << std::endl;
  }
}

int main()
{
  int arr[ROWS][COLS] = {{1, 2, 3},
                         {4, 5, 6},
                         {7, 8, 9}};

  findLargestElement(arr);

  return 0;
}
