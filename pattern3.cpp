#include <iostream>
using namespace std;
int main()
{
  int number, row = 1;
  cout << "Enter a number: ";
  cin >> number;
  while (row <= number)
  {
    int col = 1;
    while (col <= row)
    {
      cout << "*";
      col++;
    }
    cout << endl;
    row++;
  }
  return 0;
}