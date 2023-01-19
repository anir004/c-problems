#include <iostream>
using namespace std;
int main()
{
  char arr[5];
  int size = sizeof(arr) / sizeof(arr[0]);
  for (char &element : arr)
  {
    cin >> element;
  }

  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}