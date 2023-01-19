#include <iostream>
using namespace std;
int main()
{
  int number;
  cout << "Enter a Number :";
  cin >> number;
  for (int row = 1; row <= number; row++)
  {
    for (int col = number; col >= row; col--)
    {
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}