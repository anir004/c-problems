#include <iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
  int start = 0;
  int end = size - 1;

  while (start <= end)
  {
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
}

void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}
int main()
{
  int arr[10] = {10, 90, 8, 9, 7, 98, 56, 6, 455, 34};
  int arr1[8] = {1, 4, 5, 8, 9, 67, 65, 89};

  reverseArray(arr, 10);
  reverseArray(arr1, 8);

  printArray(arr, 10);
  printArray(arr1, 8);
  return 0;
}