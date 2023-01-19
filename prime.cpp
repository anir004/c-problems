#include <iostream>
using namespace std;
int main()
{

  int number, i = 2, flag = 0;
  cout << "Enter a Number: " << endl;
  cin >> number;
  while (i < number)
  {
    if (number % i == 0)
    {
      flag = 1;
      cout << "The number is not prime";
      break;
    }
    i++;
  }
  if (flag == 0)
  {
    cout << "The number is prime " << number;
  }
  return 0;
}