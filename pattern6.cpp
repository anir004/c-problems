#include <iostream>
using namespace std;
int main()
{
  int number;
  cout << "Enter a Number :";
  cin >> number;
  // For outer loop
  for (int row = 1; row <= number; row++)
  {
    // For inner loop
    for (int col = 1; col <= row; col++)
    {
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}