#include <iostream>
using namespace std;
int main()
{
  int row = 1, col, number, colNumber = 1;
  cout << "Enter a Number: ";
  cin >> number;
  while (row <= number)
  {
    col = 1;
    while (col <= row)
    {
      cout << colNumber;
      colNumber++;
      col++;
    }
    cout << endl;
    row++;
  }
  return 0;
}