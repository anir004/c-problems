#include <iostream>
using namespace std;
int main()
{

  int number, i = 1, sum = 0;
  cout << "Enter a Number " << endl;
  cin >> number;
  while (i <= number)
  {
    if (i % 2 == 0)
    {
    }
    else
    {
      sum = sum + i;
    }

    i++;
  }
  cout << "The sum is " << sum;

  return 0;
}