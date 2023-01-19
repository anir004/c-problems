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
    while (number >= col)
    {
      cout << "*";
      col++;
    }
    cout << endl;
    number--;
    row++;
  }
  return 0;
}