// First and Last Position of an Element In Sorted Array

#include <iostream>
using namespace std;
int firstOccur(int arr[], int size, int key)
{
  int start = 0;
  int end = size - 1;
  int mid = start + (end - start) / 2;
  int ans = -1;
  while (start <= end)
  {
    if (arr[mid] == key)
    {
      ans = mid;
      end = mid - 1;
    }
    else if (key > arr[mid]) // right mein jao..
    {
      start = mid + 1;
    }
    else if (key < arr[mid]) // left mein jao..
    {
      end = mid - 1;
    }
    mid = start + (end - start) / 2;
  }
  return ans;
}

int lastOccur(int arr[], int size, int key)
{
  int start = 0;
  int end = size - 1;
  int mid = start + (end - start) / 2;
  int ans = -1;
  while (start <= end)
  {
    if (arr[mid] == key)
    {
      ans = mid;
      start = mid + 1;
    }
    else if (key > arr[mid]) // right mein jao..
    {
      start = mid + 1;
    }
    else if (key < arr[mid]) // left mein jao..
    {
      end = mid - 1;
    }
    mid = start + (end - start) / 2;
  }
  return ans;
}
int main()
{
  int arr1[] = {1, 2, 3, 3, 5, 6};
  cout << "firstOccurence of 3 is at index " << firstOccur(arr1, 6, 3) << endl;
  cout << "lastOccurence of 3 is at index " << lastOccur(arr1, 6, 9) << endl;
  return 0;
}
