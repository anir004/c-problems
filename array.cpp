#include <iostream>
using namespace std;
void printArray(int arr1[], int val1, int size)
{
  for (int i = 0; i < 50; i++)
  {
    arr1[i] = val1;
    cout << arr1[i] << " ";
  }
}
int main()
{
  int arr[50], val = 3, size = 50;
  printArray(arr, val, size);
  // for (int i = 0; i < 50; i++)
  // {
  //   arr[i] = val;
  //   cout << arr[i] << " ";
  // }

  return 0;
}