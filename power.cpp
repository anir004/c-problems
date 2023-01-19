#include <iostream>
using namespace std;
int power(int, int);
int main()
{
  int number1, number2;
  cout << "Enter a number" << endl;
  cin >> number1;
  cout << "Enter a second number" << endl;
  cin >> number2;
  int answer = power(number1, number2);
  cout << "The value is " << answer << endl;
  return 0;
}

int power(int number1, int number2)
{
  int answer = 1;
  for (int i = 0; i < number2; i++)
  {
    answer = answer * number1;
  }
  return answer;
}