#include <iostream>
using namespace std;
int main()
{
  int number;
  cout << "Enter a Number :";
  cin >> number;
  for (int row = 1; row <= number; row++)
  {
    for (int col = 1; col <= number; col++)
    {
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}