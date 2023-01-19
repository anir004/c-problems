// todo: find pivot in an Array...

#include <iostream>
using namespace std;

int pivotArray(int arr[], int size)
{
  int start = 0;
  int end = size - 1;
  int mid = start + (end - start) / 2;
  while (start < end)
  {
    if (arr[mid] >= arr[0])
    {
      start = mid + 1;
    }
    else
    {
      end = mid;
    }
    mid = start + (end - start) / 2;
  }
  return start;
}
int main()
{

  int arr1[] = {7, 9, 1, 2, 3};
  cout << "pivot is " << pivotArray(arr1, 5) << endl;
  return 0;
}