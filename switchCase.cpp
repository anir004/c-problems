#include <iostream>
using namespace std;
int main()
{
  int num1 = 2, num2 = 3;
  switch (num1)
  {
  case 2:
    cout << 2 << endl;
    // break;
  case 3:
    cout << 8 << endl;
    break;
  default:
    cout << "No Number";
    break;
  }

  return 0;
}