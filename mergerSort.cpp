#include <iostream>
using namespace std;

void merge(int *arr, int start, int mid, int end)
{
  int len1 = mid - start + 1;
  int len2 = end - mid;

  // temp arrays
  int *first = new int[len1];
  int *second = new int[len2];

  // copying values

  int mainIndex = start;
  for (int i = 0; i < len1; i++)
  {
    first[i] = arr[mainIndex++];
  }
  mainIndex = mid + 1;
  for (int i = 0; i < len2; i++)
  {
    second[i] = arr[mainIndex++];
  }

  // merge 2 sorted Arrays

  int index1 = 0, index2 = 0;
  mainIndex = start;
  while (index1 < len1 && index2 < len2)
  {
    if (first[index1] < second[index2])
    {
      arr[mainIndex++] = first[index1++];
    }
    else
    {
      arr[mainIndex++] = second[index2++];
    }
  }
  while (index1 < len1)
  {
    arr[mainIndex++] = first[index1++];
  }
  while (index2 < len2)
  {
    arr[mainIndex++] = second[index2++];
  }

  delete[] first;
  delete[] second;
}

void mergeSort(int *arr, int start, int end)
{
  // base case
  if (start >= end)
    return;

  int mid = start + (end - start) / 2;

  // call mergeSort for first half
  mergeSort(arr, start, mid);

  // call mergeSort for second half
  mergeSort(arr, mid + 1, end);

  // merge two half sorted arrays

  merge(arr, start, mid, end);
}

void printArray(int *arr, int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main()
{
  int arr[7] = {10, 1, 3, 2, 12, 4, 2};
  int size = sizeof(arr) / sizeof(arr[0]);
  cout << "before sorted: ";
  printArray(arr, size);
  mergeSort(arr, 0, size - 1);
  cout << "after sorted: ";
  printArray(arr, size);

  return 0;
}