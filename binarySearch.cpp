#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int key)
{
  int start = 0;
  int end = size - 1;
  int mid = start + (end - start) / 2;
  while (start <= end)
  {
    if (arr[mid] == key)
    {
      return mid;
    }
    if (key < arr[mid])
    {
      end = mid - 1;
    }
    else
    {
      start = mid + 1;
    }
    mid = start + (end - start) / 2;
  }
  return -1;
}
int main()
{
  int arr1[] = {3, 5, 9, 13, 20, 26};
  int arr2[] = {4, 8, 9, 12, 16, 20, 40};

  cout << "the number 5 index is: " << binarySearch(arr1, 6, 5) << endl;
  cout << "the number 20 index is: " << binarySearch(arr2, 7, 2) << endl;
  return 0;
}