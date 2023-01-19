#include <iostream>
using namespace std;
int main()
{
  int number1, number2;
  char operation;
  cout << "Enter a Number" << endl;
  cin >> number1;
  cout << "Enter second Number" << endl;
  cin >> number2;
  cout << "Enter a operation" << endl;
  cin >> operation;
  switch (operation)
  {
  case '+':
    cout << number1 + number2 << endl;
    break;

  case '-':
    cout << number1 - number2 << endl;
    break;

  case '*':
    cout << number1 * number2 << endl;
    break;

  case '/':
    cout << number1 / number2 << endl;
    break;

  default:
    cout << "Invalid Expression" << endl;
  }

  return 0;
}