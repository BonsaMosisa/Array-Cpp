#include <iostream>
using namespace std;

class Calculator
{
public:
  // A. Take inputs
  void takeInputs()
  {
    cout << "Enter the total number of items (n): ";
    cin >> n;
    cout << "Enter the number of items to choose (r): ";
    cin >> r;
  }

  // B. Calculate permutation (nPr)
  int calculatePermutation()
  {
    return factorial(n) / factorial(n - r);
  }

  // B. Calculate combination (nCr)
  int calculateCombination()
  {
    return factorial(n) / (factorial(r) * factorial(n - r));
  }

  // C. Display permutation and combination
  void displayPermutationAndCombination()
  {
    cout << "Permutation (nPr): " << calculatePermutation() << endl;
    cout << "Combination (nCr): " << calculateCombination() << endl;
  }

private:
  int n;
  int r;

  // Helper function to calculate factorial
  int factorial(int num)
  {
    if (num <= 1)
      return 1;
    return num * factorial(num - 1);
  }
};

int main()
{
  Calculator calculator;

  // A. Take inputs
  calculator.takeInputs();

  // B. Calculate and display permutation and combination
  calculator.displayPermutationAndCombination();

  return 0;
}
