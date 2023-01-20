#include <iostream>
using namespace std;

int partition(int *arr, int start, int end)
{
  int pivot = arr[start];

  int count = 0;
  for (int i = start + 1; i <= end; i++)
  {
    if (arr[i] <= pivot)
    {
      count++;
    }
  }
  // place pivot in the right place

  int pivotIndex = start + count;
  swap(arr[pivotIndex], arr[start]);

  int index1 = start, index2 = end;

  while (index1 < pivotIndex && index2 > pivotIndex)
  {
    while (arr[index1] <= pivot)
    {
      index1++;
    }
    while (arr[index2] > pivot)
    {
      index2--;
    }
    if (index1 < pivotIndex && index2 > pivotIndex)
    {
      swap(arr[index1++], arr[index2--]);
    }
  }
  return pivotIndex;
}

void quickSort(int *arr, int start, int end)
{
  // base case
  if (start >= end)
    return;
  // partion
  int pi = partition(arr, start, end);

  // recursive case
  // for left part
  quickSort(arr, start, pi - 1);
  // for right part
  quickSort(arr, pi + 1, end);
}

void printArray(int *arr, int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "\n";
}

int main()
{
  int arr[] = {10, 1, 3, 2, 12, 4, 2, 9, 20, 18, 17, 14, 12};
  int size = sizeof(arr) / sizeof(arr[0]);
  cout << "before sorted: ";
  printArray(arr, size);
  quickSort(arr, 0, size - 1);
  cout << "after sorted: ";
  printArray(arr, size);

  return 0;
}