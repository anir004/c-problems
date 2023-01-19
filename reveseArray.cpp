#include <iostream>
using namespace std;
int main()
{
  int arr1[10] = {10, 90, 8, 9, 7, 98, 56, 6, 455, 34};
  cout << "Before Reverse " << endl;
  for (int i = 0; i < 10; i++)
  {
    cout << arr1[i] << " ";
  }
  cout << endl
       << "After Reverse" << endl;
  for (int i = 9; i >= 0; i--)
  {
    cout << arr1[i] << " ";
  }
  return 0;
}